/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:54:06 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/24 18:43:42 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact Created" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact Destroyed" << std::endl;
}

void Contact::setFirstName(std::string input)
{
	firstName = input;
}

void Contact::setLastName(std::string input)
{
	lastName = input;
}

void Contact::setNickName(std::string input)
{
	nickName = input;
}

void Contact::setPhoneNumber(std::string input)
{
	phoneNumber = input;
}

void Contact::setDarkestSecret(std::string input)
{
	darkestSecret = input;
}