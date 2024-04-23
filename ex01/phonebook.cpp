/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:45:27 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/23 15:59:48 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    addContact(int index, 
				std::string firstName, 
				std::string lastName, 
				std::string nickName)
{
	Contact freshContact(index, firstName, lastName, nickName);
	//for (int i = 0; i < 8; i++)
		//if (size of cont_array < 8)
		//	cont_array[i] = freshContact;
		//	return ;
		//else
			// replace the first
}

/*void    searchContact()
{
	//display contacts as a list of 4 columns: 
	//index, first name, last name and nickname.
	
 Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line

}

void    exit()
{
	//The program quits and the contacts are lost forever
}

Any other input is discarded.
Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT.*/
