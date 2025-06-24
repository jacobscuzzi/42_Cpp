/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:54:49 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/24 23:43:41 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>


void printBanner() {
    std::cout << "█▄█ █ █   █▀█ █ █ █▀█ █▄█ █▀▀ █▀▄ █▀█ █▀█ █ █   ▀▀█ █ █" << std::endl;
    std::cout << "█▀█ ▀█▀   █▀▀ █▀█ █▄█ █▀█ █▀▀ █▀▄ █▄█ █▄█ █▀▄   █▀  █▀▄" << std::endl;
    std::cout << "▀ ▀  ▀    ▀   ▀ ▀ ▀▀▀ ▀ ▀ ▀▀▀ ▀▀  ▀▀▀ ▀▀▀ ▀ ▀   ▀▀▀ ▀ ▀" << std::endl;
}


void printSearchBanner() {
    std::cout << "          █▄█ █ █   █▀█ ▀▀█ █ █" << std::endl;
    std::cout << "          █▀█ ▀█▀   █▀▀ █▀  █▀▄" << std::endl;
    std::cout << "          ▀ ▀  ▀    ▀   ▀▀▀ ▀ ▀" << std::endl;
}


std::string makeStringSizeTen(std::string input_string)
{
	int limit;
	int size;
	limit = 10;
	size = input_string.size();
	if (size <= 10)
	{
		while (size < 10)
		{
			input_string.insert(0, " ");
			size++;
		}
	}
	else
	{
		input_string.resize(10);
		input_string.replace(9, 1, 1, '.');
	}
	return (input_string);
}