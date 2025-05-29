/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:08 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/05/29 18:29:30 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact::Contact contacts[8];
		int currentIndex;
		int totalContacts;

	public:
		Phonebook();
		void addContact(const Contact& contact);
		void searchContacts() const;
		void displayContact(int index) const;
		void deleteContact(int index);
		void clearContacts();
};

#endif