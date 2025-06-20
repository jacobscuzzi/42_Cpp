/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:19:05 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/17 21:17:15 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : totalContacts(0), currentIndex(0)
{
	std::cout << "Phonebook created" << std::endl;
}
                                                      
PhoneBook::~Phonebook()
{
	std::cout << "Phonebook destroyed" << std::endl;
}