/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:46 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/16 15:36:15 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <limits>
#include "phonebook.hpp"

/*
  Exercise 01: My Awesome PhoneBook: Static Memory PhoneBook Manager
 +----------------------+---------------------------------------------------------------+
 |       Keyword        |                          Description                          |
 +----------------------+---------------------------------------------------------------+
 | Classes              |  Implementing PhoneBook and Contact classes                   |
 | Encapsulation        |  Defining private and public members within classes           |
 | Arrays               |  Storing contacts within the PhoneBook class                  |
 | Static Members       |  Storing contacts statically, dynamic allocation forbidden    |
 | User Interaction     |  Handling user input for adding, searching, and exiting       |
 | Data Validation      |  Ensuring non-empty fields, non-valid phone number for contact|
 | Output Formatting    |  Formatting contact display for SEARCH command                |
 | Error Handling       |  Managing errors for invalid commands or out-of-range index   |
 | Program Flow Control |  Implementing logic for continuous command prompt until EXIT  |
 +----------------------+---------------------------------------------------------------+
*/

void    menu(void)
{
	std::cout << MAGENTA << "╔═════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Welcome to my ✏️📔✏️ vintage phonebook!  ║" << std::endl;
	std::cout << "║ Type one of these commands to start:    ║" << std::endl;
	std::cout << "║             📝 ADD                      ║" << std::endl;
	std::cout << "║             🔍 SEARCH                   ║" << std::endl;
	std::cout << "║             🚪 EXIT                     ║" << std::endl;
	std::cout << "╚═════════════════════════════════════════╝" << std::endl;
}



int main()
{
	int index;
	int contact_count;
	std::string	input;
	
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	
	PhoneBook	pb;
	
	index = 1;
	contact_count = 0;
	system("clear");	
	menu();
	while (1)
	{
		firstName = "";
		lastName = "";
		nickName = "";
		phoneNumber = "";
		darkestSecret = "";
		std::cout << "Enter your command: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			break ;
		}
		
		if (input == "ADD")
		{
			std::cout << GREEN << "                    ╔═════════════════════════════════════════╗" << RESET << std::endl;
			std::cout << GREEN << "                    ║         📝 ADD A NEW CONTACT            ║" << RESET << std::endl;
			std::cout << GREEN << "                    ╚═════════════════════════════════════════╝" << RESET << std::endl;

			if (contact_count > MAX_CONTACTS)
				contact_count = 0;
			std::cout << GREEN << "                    Enter required details for the contact:" << std::endl;;
			if (get_input("                    👤 First name     :", &firstName))
				break ;
			if (get_input("                    👥 Last name      :", &lastName))
				break ;
			if (get_input("                    🤙 Nick name      :", &nickName))
				break ;
			if (get_input("                    📲 Phone number   :", &phoneNumber))
				break ;
			if (get_input("                    🤫 Darkest secret :", &darkestSecret))
				break ;				
			Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
			pb.addContact(contact_count, contact);
			index++;
			contact_count++;
			std::cout << GREEN << "\n                    Contact added successfully." << std::endl;
			std::cout << GREEN << "\n                    Press ENTER to continue." << RESET << std::endl;
			std::cin.ignore();
		}
		else if (input == "SEARCH")
		{
			std::cout << YELLOW << "                    ╔═════════════════════════════════════════╗" << std::endl;  
			std::cout << YELLOW << "                    ║         ✏️📔✏️ My Contact List            ║" << std::endl;
			std::cout << YELLOW << "                    ╚═════════════════════════════════════════╝" << std::endl;
			if (contact_count == 0) {
				std::cout << "                    No contacts found. Phonebook is empty." << std::endl;
				std::cout << "                    Press ENTER to continue." << std::endl;
				std::cin.ignore();
			}
			else
			{
				pb.searchContact();
			}
			std::cout << RESET;
		}
		else if (input == "EXIT")
		{
			std::cout << MAGENTA << "\nExiting the phonebook. Goodbye!\n" << std::endl;
			std::cout << RESET;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			break ;
		}
		else
		{
			std::cout << "\nInvalid command. Please type one of these commands: \nADD, SEARCH, or EXIT.\nPress ENTER to return." << std::endl;
			std::cout << std::endl;
			std::cin.ignore();
		}
		system("clear");
		menu();
	}
	return (0);
}