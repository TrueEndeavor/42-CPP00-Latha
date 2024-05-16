/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:45:27 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/16 11:57:38 by lannur-s         ###   ########.fr       */
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
		std::cout << std::endl;
		std::cout << "                    Enter an index or press ENTER to return: ";
		if (!std::getline(std::cin, index))
			break ;
		if (index.empty())
		{
			break ;
		}
		else if (index.length() != 1 || index[0] < '1' || index[0] > '8')
		{
			std::cout << "                    Invalid index. Try again.";
			std::cout << std::endl;
		}
		else
		{
			for (int i = 0; i < MAX_CONTACTS; i++)
			{
				if (i == (index[0] - '0') - 1)
				{
					this->contacts_array[(index[0] - '0') - 1].displayContactInfo();
				}
			}
		}
	}
}

void    PhoneBook::displayContacts(void) const
{
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if ((this->contacts_array[i].getFirstName())[0] != '\0')
		{
			std::cout << "                    ";
			std::cout << std::right << (i + 1) << "| ";
			std::cout << std::setw(10) << formatWidth(this->contacts_array[i].getFirstName()) << "| ";
			std::cout << std::setw(10) << formatWidth(this->contacts_array[i].getLastName()) << "| ";
			std::cout << std::setw(10) << formatWidth(this->contacts_array[i].getNickName()) << std::endl;
		}
	}
}
