/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:46:07 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/06 13:26:13 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Default constructor
Contact::Contact()
{

}

// Default Destructor
Contact::~Contact()
{
}

// Parameterized constructor
Contact::Contact(std::string firstName, std::string lastName, \
			std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
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

// Return the first name of the contact
std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

// Return the last name of the contact
std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

// Return the nickname of the contact
std::string	Contact::getNickName(void) const
{
	return (this->nickName);
}

// Return the phone number of the contact
std::string	Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

// Return the darkest secret of the contact
std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}

/* Prints the contact information to the console,
   including the first name, last name, nickname, 
   phone number and darkest secret of the contact.
*/
void	Contact::displayContactInfo(void) const
{
	if ((getFirstName()[0]) != '\0')
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
		std::cout << std::endl;		
	}
	else
		std::cout << "Invalid index. Try again." << std::endl;
}
