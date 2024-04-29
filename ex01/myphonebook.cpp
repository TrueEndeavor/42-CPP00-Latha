/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:46 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/29 15:33:56 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "phonebook.hpp"
	
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
		
		index = 0;
		contact_count = 0;
		while (1)
		{
			std::cout << "╔═════════════════════════════════════════╗" << std::endl;
	        std::cout << "║     Welcome to my 📒 vintage phonebook! ║" << std::endl;
	        std::cout << "║ Type one of these commands to start:    ║" << std::endl;
	        std::cout << "║             📝 ADD                      ║" << std::endl;
	        std::cout << "║             🔍 SEARCH                   ║" << std::endl;
	        std::cout << "║             🚪 EXIT                     ║" << std::endl;
	        std::cout << "╚═════════════════════════════════════════╝" << std::endl;
	        std::cout << "Enter your command: ";
			getline(std::cin, input);
			if (input == "ADD")
			{
			std::cout << "╔═════════════════════════════════════════╗" << std::endl;
            std::cout << "║         📝 ADD A NEW CONTACT            ║" << std::endl;
            std::cout << "╚═════════════════════════════════════════╝" << std::endl;
			
				if (contact_count > 8)
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
				if (!isValidPhoneNumber(phoneNumber))
				{
					std::cout << "\nPhone number contains non-numeric chars. Please provide 10-digit valid phone number.\n" << std::endl;
				}
				if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty())
				{
					std::cout << "\nContact cannot have any empty fields. Please provide info for all the fields.\n" << std::endl;
					std::cout << "Press ENTER to continue." << std::endl;
					std::cin.ignore();
				}
				else if (isValidPhoneNumber(phoneNumber))
				{
					Contact contact(index, firstName, lastName, nickName, phoneNumber);
					pb.addContact(contact_count, contact);
					//~contact();
					// must be a parameterized destructor? Non?
					contact_count++;
				}
			}
			else if (input == "SEARCH")
			{
				pb.searchContact();
			}
			else if (input == "EXIT")
			{
				//~Contact();
				//~pb();
				std::cout << "Exiting the phonebook. Goodbye!" << std::endl;
				break ;
			}
			else
			{
				std::cout << "Invalid command. Please type one of these commands: ADD, SEARCH, or EXIT" << std::endl;
			}
		}
		return (0);
	}