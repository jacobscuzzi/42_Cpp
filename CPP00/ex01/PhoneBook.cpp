/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:19:05 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/24 23:57:13 by jbaumfal         ###   ########.fr       */
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

void	PhoneBook::printContactPreview()
{
	int	index;
	Contact	*contact;

	index = 0;
	std::cout << "______________________________________________" << std::endl;
	while (index < 8)
	{
		contact = &this->contacts[index];
		std::cout << "|";
		std::cout << index;
		std::cout << "          ";
		std::cout << "|";
		std::cout << makeStringSizeTen(contact->getFirstName());
		std::cout << "|";
		std::cout << makeStringSizeTen(contact->getLastName());
		std::cout << "|";
		std::cout << makeStringSizeTen(contact->getNickName());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << "______________________________________________";
		
		index++;
	}
}
void	PhoneBook::search()
{
	printSearchBanner();
	this->printContactPreview();
}


void	PhoneBook::execute_command(pb_command command)
{
	switch (command)
	{
		case ADD:
			this->add();
			break;
		case SEARCH:
			this->search();
			break;
		case EXIT:
			break;
		default:
			break;
	}
}