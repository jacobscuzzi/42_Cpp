/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:13 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/08 19:59:03 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"



pb_command	check_command(std::string	input)
{
	if (input == "ADD")
		return ADD;
	else if (input == "SEARCH")
		return SEARCH;
	if (input == "EXIT")
		return EXIT;
	else
		return UNKNOWN;
}


int	main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	std::string	input;
	system("clear");
	pb_command	command;
	{
		PhoneBook MyPhonebook2000;
		system("clear");
		print_banner();
		std::cout << "Welcome to My Phonebook 2k" << std::endl;
		while (1)
		{
			std::cout << "Feel free to execute one of the following comands: ADD, SEARCH, EXIT" << std::endl;
			
			if (!getline(std::cin, input))
				break;
			command = check_command(input);
			MyPhonebook2000.execute_command(command);
			if (command == EXIT)
				break ;
		}
	}
	std::cout << "You have exited this Phonebook... I have deleted all Contacts and the Phonebook" << std::endl;
	std::cout << "Good Bye FOREVER ...... ITS OVER" << std::endl;
}