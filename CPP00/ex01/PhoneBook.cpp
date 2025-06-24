/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:19:05 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/24 19:02:41 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : totalContacts(0), currentIndex(0)
{
	currentIndex = 0;
	totalContacts = 8;
	std::cout << "Phonebook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destroyed" << std::endl;
}


void	PhoneBook::add()
{
	std::string	input;
	Contact	*new_contact;

	new_contact = (Contact *)&contacts[currentIndex];
	std::cout << "Oh, wow you wanna at a contact?" << std::endl << "What is the contacts First Name:  ";
	getline(std::cin, input);
	new_contact->setFirstName(input);
	std::cout << "And now enter the contacts Last Name: " << std::endl;
	getline(std::cin, input);
	new_contact->setLastName(input);
	std::cout << "Does the Person has a nickname? If yes pelase enter it now: " << std::endl;
	getline(std::cin, input);
	new_contact->setNickName(input);
	std::cout << "Please enter the Phone number: " << std::endl;
	getline(std::cin, input);
	new_contact->setPhoneNumber(input);
	std::cout << "Now it gets interesting. Give me the persons darkest secret!: " << std::endl;
	getline(std::cin, input);
	new_contact->setDarkestSecret(input);
	currentIndex++;
	if (currentIndex == 8)
		currentIndex = 0;
}


void	PhoneBook::execute_command(pb_command command, PhoneBook MyPhonebook2000)
{
	switch (command)
	{
		case ADD:
			MyPhonebook2000.add();
			break;
		case SEARCH:
			break;
		case EXIT:
			break;
		default:
			break;
	}
}