/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:46 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/24 16:47:02 by lannur-s         ###   ########.fr       */
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
		std::cout << "Welcome to my vintage phonebook!" << std::endl;
		std::cout << "Type one of these commands to start: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, input);
		if (input == "ADD")
		{
			if (contact_count > 8)
				contact_count = 0;
			std::cout << "Enter the following details (all mandatory) for your contact:";
			std::cout << "First name:";
			getline(std::cin, firstName);
			std::cout << "Last name:";
			getline(std::cin, lastName);
			std::cout << "Nick name:";
			getline(std::cin, nickName);
			std::cout << "Phone number:";
			getline(std::cin, phoneNumber);
			if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty())
			{
				std::cout << "\nContact cannot have any empty fields. Please provide info for all the fields.\n" << std::endl;
				std::cout << "Press ENTER to continue." << std::endl;
				std::cin.ignore();
			}
			Contact contact(index, firstName, lastName, nickName, phoneNumber);
			pb.addContact(contact_count, contact);
			//~contact();
			// must be a parameterized destructor? Non?
			contact_count++;
		}
		else if (input == "SEARCH")
		{
			pb.searchContact();
		}
		else if (input == "EXIT")
		{
			//~Contact();
			//~pb();
			break ;
		}
		else
		{
			std::cout << "Invalid command. Please type one of these commands: ADD, SEARCH, or EXIT" << std::endl;
		}
	}
	return (0);
}