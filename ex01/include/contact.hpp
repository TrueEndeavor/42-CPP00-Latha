/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:18:01 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/23 13:50:14 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>

class   Contact
{
	private:
		int index;
		std::string  firstName;
		std::string  lastName;
		std::string  nickName;

	public:
		Contact();  //Default constructor
		~Contact(); //Default destructor
		
		// Parameterized constructor
		Contact(int index, 
				std::string firstName, 
				std::string lastName, 
				std::string nickName);

		// Setters
		void setIndex(int index);
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		
		// Getters
		int getIndex(int index);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		
		
};

#endif