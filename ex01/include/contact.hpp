/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:18:01 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/30 10:25:55 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class	Contact
{
	private:
		int index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		// Default constructor
		Contact();

		// Default destructor
		~Contact();

		// Parameterized constructors
		Contact(int index, 
				std::string firstName, 
				std::string lastName, 
				std::string nickName,
				std::string phoneNumber, 
				std::string darkestSecret);

		// Setters
		void setIndex(int index);
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setPhoneNumber(std::string phoneNumber);
		void setDarkestSecret(std::string darkestSecret);

		// Getters
		int getIndex(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);

		void displayContactInfo(void);
};

#endif