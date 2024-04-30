/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:45:27 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/30 14:56:02 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// Default constructor
PhoneBook::PhoneBook()
{
	// Initialize contacts_array elements to default Contact objects with index 0
	for (int i = 0; i < MAX_CONTACTS; ++i)
	{
		contacts_array[i] = Contact();
	}
}

// Destructor
PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::addContact(int index, Contact contact)
{
	this->contacts_array[index] = contact;
}

void    PhoneBook::searchContact(void)
{
	std::string index;
	
	this->displayContacts();
	while (1)
	{
		std::cout << "\nEnter an index or press ENTER to return: ";
		std::getline(std::cin, index);
		if (index.empty())
		{
			break ;
		}
		else if (index.length() != 1 || index[0] < '1' || index[0] > '8')
		{
			std::cout << "Invalid index. Try again.";
			std::cin.ignore();
		}
		else
		{
			this->contacts_array[(index[0] - '1')].displayContactInfo();
			std::cout << "          SEARCH CONTACT        ";
			//(this->contacts_array[(index[0] - '0')]).displayContactInfo();
		}
	//this->displayContacts();
	}
}

void    PhoneBook::displayContacts(void)
{
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (this->contacts_array[i].getIndex() > 0)
		{
			std::cout << std::right << this->contacts_array[i].getIndex() << "| ";
			std::cout << std::setw(10) << formatWidth(this->contacts_array[i].getFirstName()) << "| ";
			std::cout << std::setw(10) << formatWidth(this->contacts_array[i].getLastName()) << "| ";
			std::cout << std::setw(10) << formatWidth(this->contacts_array[i].getNickName()) << std::endl;
		}
	}
}
