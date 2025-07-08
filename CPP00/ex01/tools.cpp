/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:54:49 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/08 20:02:12 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void print_banner()
{
	std::cout << "█▄█ █ █   █▀█ █ █ █▀█ █▄█ █▀▀ █▀▄ █▀█ █▀█ █ █   ▀▀█ █ █" << std::endl;
	usleep(100000);
	std::cout << "█▀█ ▀█▀   █▀▀ █▀█ █▄█ █▀█ █▀▀ █▀▄ █▄█ █▄█ █▀▄   █▀  █▀▄" << std::endl;
	usleep(100000);
	std::cout << "▀ ▀  ▀    ▀   ▀ ▀ ▀▀▀ ▀ ▀ ▀▀▀ ▀▀  ▀▀▀ ▀▀▀ ▀ ▀   ▀▀▀ ▀ ▀" << std::endl;
	usleep(100000);
}


void print_search_banner()
{
	std::cout << "          █▄█ █ █   █▀█ ▀▀█ █ █" << std::endl;
	usleep(100000);
	std::cout << "          █▀█ ▀█▀   █▀▀ █▀  █▀▄" << std::endl;
	usleep(100000);
	std::cout << "          ▀ ▀  ▀    ▀   ▀▀▀ ▀ ▀" << std::endl;
}


void print_new_contact_banner()
{
	std::cout << " █▄█ █▀▀ █ █   █▀▀ █▀█ █▄█ ▀█▀ █▀█ █▀▀ ▀█▀" << std::endl;
	usleep(100000);
	std::cout << " █▀█ █▀▀ █▄█   █   █▄█ █▀█  █  █▀█ █    █ " << std::endl;
	usleep(100000);
	std::cout << " ▀ ▀ ▀▀▀ ▀ ▀   ▀▀▀ ▀▀▀ ▀ ▀  ▀  ▀ ▀ ▀▀▀  ▀ " << std::endl;
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