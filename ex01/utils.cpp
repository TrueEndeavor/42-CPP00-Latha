/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:54:53 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/29 15:17:25 by lannur-s         ###   ########.fr       */
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
		if ((number[i] - 48 >= 0 && number[i] - 48 <= 9) && (number.length() == 10))
			return (true);
	}
	return (false);
}