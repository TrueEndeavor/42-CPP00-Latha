/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:46:07 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/24 17:45:48 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Default constructor
Contact::Contact()
{
	return ;
}

Contact::Contact(int index, std::string firstName, std::string lastName, \
			std::string nickName, std::string phoneNumber)
{
	setIndex(index);
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
}

// Destructor
Contact::~Contact()
{
	return ;
}

void Contact::setIndex(int index)
{
	this->index = index;
}
void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

int Contact::getIndex(void)
{
	return (this->index);
}

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickName(void)
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

void displayContactInfo(void)
{
	std::cout << getIndex() << std::endl;
	std::cout << getFirstName() << std::endl;
	std::cout << getLastName() << std::endl;
	std::cout << getNickName() << std::endl;
	std::cout << getPhoneNumber() << std::endl;
}
