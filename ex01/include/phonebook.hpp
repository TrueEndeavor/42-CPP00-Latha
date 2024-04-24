/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:18:32 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/24 17:06:19 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

# include "contact.hpp"
# include "utils.hpp"

class   PhoneBook
{
	private:
		Contact cont_array[8];
		void display_header();
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void addContact(int index, Contact contact);
		void searchContact(void);
		void displayContacts(void);
};

#endif
