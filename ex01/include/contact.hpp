/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:18:01 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/24 17:44:10 by lannur-s         ###   ########.fr       */
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
		std::string  firstName;
		std::string  lastName;
		std::string  nickName;
		std::string  phoneNumber;

	public:
		Contact();  //Default constructor
		~Contact(); //Default destructor
		
		// Parameterized constructor
		Contact(int index, 
				std::string firstName, 
				std::string lastName, 
				std::string nickName,
				std::string phoneNumber);
		
		// Setters
		void setIndex(int index);
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setPhoneNumber(std::string phoneNumber);

		// Getters
		int getIndex(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		
		void displayContactInfo(void);
};

#endif