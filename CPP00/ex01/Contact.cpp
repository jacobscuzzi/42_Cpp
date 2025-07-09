/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:54:06 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/09 22:26:35 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	usleep(100000);
	std::cout << "Contact Created" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact Destroyed" << std::endl;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}
std::string	Contact::getLastName()
{
	return (lastName);
}
std::string	Contact::getNickName()
{
	return (nickName);
}
std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}

void	Contact::setFirstName(std::string input)
{
	firstName = input;
}

void	Contact::setLastName(std::string input)
{
	lastName = input;
}

void	Contact::setNickName(std::string input)
{
	nickName = input;
}

void	Contact::setPhoneNumber(std::string input)
{
	phoneNumber = input;
}

void	Contact::setDarkestSecret(std::string input)
{
	darkestSecret = input;
}

void	Contact::printContact()
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nick Name: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}