/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:35 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:36 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <unistd.h>

int	main(void)
{
	std::string main_character;
	std::string	*stringPTR;

	main_character = "HI THIS IS BRAIN";
	stringPTR = &main_character;
	std::string &stringREF = main_character;

	std::cout << "Initialization finished. Starting printing demanded values...." << std::endl;
	sleep(2);
	std::cout << " The memory address of the string: " << &main_character << std::endl;
	sleep(2);
	std::cout << " The memory address held by stringPTR: " << stringPTR << std::endl;
	sleep(2);
	std::cout << " The memory address held by stringREF: " << &stringREF << std::endl;
	sleep(2);
	std::cout << " The value of the string variable: "<< main_character << std::endl;
	sleep(2);
	std::cout << " The value pointed to by stringPTR.: " << *stringPTR << std::endl;
	sleep(2);
	std::cout << " The value pointed to by stringREF.: " << stringREF << std::endl;
	sleep(2);
} 