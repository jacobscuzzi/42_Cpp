/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:13 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/24 19:03:17 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

#include <iostream>
#include <string>



pb_command	check_command(std::string	input)
{
	if (input == "ADD")
	{
		std::cout << "ADD operator detected" << std::endl;
		return ADD;
	}
	else if (input == "SEARCH")
	{	
		std::cout << "SEARCH operator detected" << std::endl;
		return SEARCH;

	}
	if (input == "EXIT")
	{	
		std::cout << "EXIT operator detected" << std::endl;
		return EXIT;
	}
	else
	{
		std::cout << "This input is ignored, i dont know what you talking about"<< std::endl;
		std::cout << "Try ADD, SEARCH, or EXIT" << std::endl;
		return UNKNOWN;
	}
}


int	main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	std::string	input;
	pb_command	command;
	PhoneBook MyPhonebook2000;
	
	std::cout << "Welcome to jbaumfals Phonebook" << std::endl;
	std::cout << "Feel free to execute one of the following comands: ADD, SEARCH, EXIT" << std::endl;	
	while (1)
	{	
		getline(std::cin, input);
		std::cout << "The input is:" << input << std::endl;
		command = check_command(input);
		MyPhonebook2000.execute_command(command);
	}
}