/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:46 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/30 15:55:13 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <limits>
#include "phonebook.hpp"

void    menu(void)
{
	std::cout << "╔═════════════════════════════════════════╗" << std::endl;
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
		std::cout << "Enter your command: ";		
		getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "╔═════════════════════════════════════════╗" << std::endl;
			std::cout << "║         📝 ADD A NEW CONTACT            ║" << std::endl;
			std::cout << "╚═════════════════════════════════════════╝" << std::endl;

			if (contact_count > MAX_CONTACTS)
				contact_count = 0;
			std::cout << "Enter required details for the contact:" << std::endl;;
			std::cout << "👤 First name    :";
			getline(std::cin, firstName);
			std::cout << "👥 Last name     :";
			getline(std::cin, lastName);
			std::cout << "🤙 Nick name     :";
			getline(std::cin, nickName);
			std::cout << "📲 Phone number  :";
			getline(std::cin, phoneNumber);
			std::cout << "🤫 Darkest secret  :";
			getline(std::cin, darkestSecret);
			if (!isValidPhoneNumber(phoneNumber))
			{
				std::cout << "\nPhone number is not valid. Please provide 10-digit valid phone number." << std::endl;
				std::cout << "Press ENTER to continue." << std::endl;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Wait for Enter
			}
			if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty())
			{
				std::cout << "\nContact cannot have any empty fields. Please provide info for all the fields.\n" << std::endl;
				std::cout << "Press ENTER to continue." << std::endl;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Wait for Enter
			}
			else if (isValidPhoneNumber(phoneNumber))
			{
				Contact contact(index, firstName, lastName, nickName, phoneNumber, darkestSecret);
				pb.addContact(contact_count, contact);
				index++;
				contact_count++;
				std::cout << "\nContact added successfully.\nPress ENTER to continue." << std::endl;
				std::cin.ignore();
			}
		}
		else if (input == "SEARCH")
		{
			if (contact_count == 0) {
				std::cout << "No contacts found. Phonebook is empty. \nPress ENTER to return." << std::endl;
				std::cin.ignore();
			}
			else
			{
				pb.searchContact();
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Exiting the phonebook. Goodbye!" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			break ;
		}
		else
		{
			std::cout << "Invalid command. Please type one of these commands: \nADD, SEARCH, or EXIT\nPress ENTER to return." << std::endl;
			std::cin.ignore();
		}
		system("clear");
		menu();
	}
	return (0);
}