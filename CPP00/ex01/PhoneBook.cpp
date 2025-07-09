/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:19:05 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/09 22:29:06 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : totalContacts(0), currentIndex(0)
{
	currentIndex = 0;
	totalContacts = 0;
	std::cout << "Phonebook created" << std::endl;
	usleep(100000);
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destroyed" << std::endl;
}


void	PhoneBook::add()
{
	std::string	input;
	Contact	*new_contact;

	system("clear");
	print_new_contact_banner();
	new_contact = (Contact *)&contacts[currentIndex];
	std::cout << "Oh, wow you wanna at a contact?" << std::endl << "What is the contacts First Name:  ";
	getline(std::cin, input);
	new_contact->setFirstName(input);
	std::cout << "And now enter the contacts Last Name: ";
	getline(std::cin, input);
	new_contact->setLastName(input);
	std::cout << "Does the Person has a nickname? If yes pelase enter it now: ";
	getline(std::cin, input);
	new_contact->setNickName(input);
	std::cout << "Please enter the Phone number: ";
	getline(std::cin, input);
	new_contact->setPhoneNumber(input);
	std::cout << "Now it gets interesting. Give me the persons darkest secret!: ";
	getline(std::cin, input);
	new_contact->setDarkestSecret(input);
	std::cout << "Perfect, the Contact " << new_contact->getFirstName() << "has been created" << std::endl;
	currentIndex++;
	if (currentIndex == 8)
		currentIndex = 0;
	if (totalContacts < 8)
		totalContacts++;
}

void	PhoneBook::printContactPreview()
{
	int	index;
	Contact	*contact;

	index = 0;	usleep(10000);

	std::cout << " ___________________________________________" << std::endl;
	while ( index < this->totalContacts)
	{
		contact = &this->contacts[index];
		std::cout << "|";
		std::cout << "         " << index;
		std::cout << "";
		std::cout << "|";
		std::cout << makeStringSizeTen(contact->getFirstName());
		std::cout << "|";
		std::cout << makeStringSizeTen(contact->getLastName());
		std::cout << "|";
		std::cout << makeStringSizeTen(contact->getNickName());
		std::cout << "|";
		std::cout << std::endl;
		index++;
	}
	std::cout << "`````````````````````````````````````````````" << std::endl;
}
void	PhoneBook::search()
{
	std::string			input_string;
	int					index_int;

	index_int = 0;
	if (totalContacts == 0)
	{
		std::cout << "This is an empty phonebook , nothing to search for here ...." << std::endl;
		return ;
	}
	system("clear");
	print_search_banner();
	this->printContactPreview();
	std::cout << "Welcome to the Search Operation, Feel free to pass me the index of the Contact you want to see:" << std::endl;
	if (!getline(std::cin, input_string))
		return ;
	std::istringstream	input_stream(input_string);
	if (!(input_stream >> index_int))
		std::cout << "This is no number are you stupid? Try SEARCH again with a valid index" << std::endl;
	else if (index_int >= totalContacts)
		std::cout << "This index is to high. Aint no contact with that number yo! Try SEARCH again with a valid index" << std::endl;
	else
		contacts[index_int].printContact();
}

void	PhoneBook::execute_command(pb_command command)
{
	switch (command)
	{
		case ADD:
		{}
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