/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:41:37 by lannur-s          #+#    #+#             */
/*   Updated: 2024/04/23 10:41:40 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* Print each character of the input string in uppercase */
void  printUpperCase(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		std::cout << (char) std::toupper(str[i]);
}

/* Main */
int main(int ac, char **av)
{
	if (ac == 1)
		 std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	for (int i = 1; i < ac; i++)
		printUpperCase(av[i]);
	
	std::cout << std::endl;
	
	return (0);
}
