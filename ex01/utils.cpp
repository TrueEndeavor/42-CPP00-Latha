/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:54:53 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/16 18:37:43 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string    formatWidth(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

bool	isValidPhoneNumber(std::string number)
{
	for (int i=0; i < (int) number.length(); i++)
	{
		if ((number[i] < '0' || number[i] > '9') || number.length() != 10)
			return (false);
	}
	return (true);
}

int	get_input(std::string display, std::string *field)
{
	while ((*field).size() == 0)
	{
		std::cout << display;
		std::getline(std::cin, *field);
		if ((*field).size() == 0)
			std::cout << "                    ❌ Empty input, please re-enter valid info" << std::endl;
		if (std::cin.eof())
		{
			return (1);
		}
		if (display == "                    📲 Phone number   :"
			&& (!isValidPhoneNumber(*field)))
		{
			std::cout << "                    ❌ Invalid phone number, please provide 10-digit number" << std::endl;
			*field = "";
		}
	}
	return (0);
}