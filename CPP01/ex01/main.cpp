/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:39 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:40 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (int argc, char **argv)
 {
	int N;
	Zombie* horde;

	std::cout << "Welcome to Zombie land!" << std::endl;
	sleep(2);
	std::cout << "Today we will create a horde of zombies!" << std::endl;
	sleep(2);
	std::cout << "How many zombies do you want to create? (Enter a number greater than 0): ";
	std::cin >> N;
	while (N < 1)
	{
		std::cout << "Invalid input. Please enter a number greater than 0." << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "How many zombies do you want to create? (Enter a number greater than 0): ";
		std::cin >> N;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "What should be the name of the zombies? ";
	std::string name;
	std::getline(std::cin, name);
	while (name.length() == 0)
	{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "You forget to name the zombies. Give me at least one letter" << std::endl;
			std::cout << "What name should the zombies have? :" << std::endl;
			getline(std::cin, name);
	}
	horde = zombieHorde(N, name);
	sleep(2);
	std::cout << "The zombie horde has been created! Lets make them present themselves..." << std::endl;
	sleep(2);
	for (int i = 0; i < N; i++ )
	{
		horde[i].announce();
		sleep(1);
	}
	std::cout << "Ok now that they have been intrduced, lets get to the fun part..." << std::endl;
	sleep(1);
	std::cout << "lets use the delete[] operator to kill them all muhahahaha" << std::endl;
	sleep(3);
	delete[] horde;
 }