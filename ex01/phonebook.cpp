/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:45:27 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/29 16:13:26 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// Default constructor
PhoneBook::PhoneBook()
{
	return ;
}

// Destructor
PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::addContact(int index, Contact contact)
{
	this->cont_array[index] = contact;
}

void    PhoneBook::searchContact(void)
{
	//display contacts as a list of 4 columns: 
	//index, first name, last name and nickname.
	int index;
	
	displayContacts();
	std::cout << "Enter the index:";
	if (!(std::cin >> index))
	{
        // handle error
	}
	this->cont_array[index].displayContactInfo();
/* 
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line */

}

void    PhoneBook::displayContacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << this->cont_array[i].getIndex() << std::cout << "| ";
		std::cout << std::setw(10) << formatWidth(this->cont_array[i].getFirstName()) << std::cout << "| ";
		std::cout << std::setw(10) << formatWidth(this->cont_array[i].getLastName()) << std::cout << "| ";
		std::cout << std::setw(10) << formatWidth(this->cont_array[i].getNickName()) << std::endl;
	}
}
