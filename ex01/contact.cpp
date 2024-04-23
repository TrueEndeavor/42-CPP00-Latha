/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:46:07 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/23 13:57:01 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

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

int Contact::getIndex(int index)
{
	return (this->index);
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickName()
{
	return (this->nickName);
}

Contact::Contact(int index, std::string firstName, std::string lastName, \
			std::string nickName)
{
	setIndex(index);
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
}
