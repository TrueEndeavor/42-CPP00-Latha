/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:18:32 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/06 13:49:22 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

# include "contact.hpp"
# include "utils.hpp"

# define MAX_CONTACTS 8

class	PhoneBook
{
	private:
		Contact	contacts_array[MAX_CONTACTS];

	public:
		// Default constructor
		PhoneBook(void);

		// Default destructor
		~PhoneBook(void);

		void addContact(int index, Contact contact);
		void searchContact(void);
		void displayContacts(void) const;
};

#endif
