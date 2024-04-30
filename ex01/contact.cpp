/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:46:07 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/30 15:04:15 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Default constructor
Contact::Contact()
{
	this->index = 0;
}

// Default Destructor
Contact::~Contact()
{
}

// Parameterized constructor
Contact::Contact(int index, std::string firstName, std::string lastName, \
			std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	setIndex(index);
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
}

// Set the index of the contact
void	Contact::setIndex(int index)
{
	this->index = index;
}

// Set the first name of the contact
void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

// Set the last name of the contact
void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

// Set the nickname of the contact
void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

// Set the phone number of the contact
void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

// Set the darkest secret of the contact
void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

// Return the index of the contact
int	Contact::getIndex(void)
{
	return (this->index);
}

// Return the first name of the contact
std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

// Return the last name of the contact
std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

// Return the nickname of the contact
std::string	Contact::getNickName(void)
{
	return (this->nickName);
}

// Return the phone number of the contact
std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

// Return the darkest secret of the contact
std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

/* Prints the contact information to the console,
   including the index, first name, last name, nickname, 
   phone number and darkest secret of the contact.
*/
void	Contact::displayContactInfo(void)
{
	std::cout << "+-----------------------------------------+\n";
	std::cout << "| ";
	std::cout << std::setw(20) << std::right << "First Name: " << std::setw(20) << std::left << getFirstName();
	std::cout << "|\n";
	std::cout << "| ";
	std::cout << std::setw(20) << std::right << "Last Name: " << std::setw(20) << std::left << getLastName();
	std::cout << "|\n";
	std::cout << "| ";
	std::cout << std::setw(20) << std::right << "Nickname: " << std::setw(20) << std::left << getNickName();
	std::cout << "|\n";
	std::cout << "| ";
	std::cout << std::setw(20) << std::right << "Phone Number: " << std::setw(20) << std::left << getPhoneNumber();
	std::cout << "|\n";
	std::cout << "| ";
	std::cout << std::setw(20) << std::right << "Darkest Secret: " << std::setw(20) << std::left << getDarkestSecret();
	std::cout << "|\n";
	std::cout << "+-----------------------------------------+\n";
}
