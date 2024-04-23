/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:54:46 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/23 16:00:14 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main()
{
	PhoneBook   pb;
	std::string input;
	
	std::cout << "Type one of these commands to start: ADD, SEARCH, EXIT" << std::endl;
	std::cin >> input;
	
	if (input == "ADD")
	{
		// do add
	}
	else if (input == "SEARCH")
	{
		// do search
	}
	else if (input == "EXIT")
	{
		// do exit
	}
	else
	{
		std::cout << "Invalid command. Please type one of these commands: ADD, SEARCH, or EXIT" << std::endl;
	}
	return (0);
}