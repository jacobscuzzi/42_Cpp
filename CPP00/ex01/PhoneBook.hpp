/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:08 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/05/30 17:51:34 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

enum pb_command
{
	UNKNOWN,
	ADD,
	SEARCH,
	EXIT
};

class	Phonebook
{
	private:
		Contact contacts[8];
		int currentIndex;
		int totalContacts;

	public:
		Phonebook();
		void add(const Contact& contact);
		void search() const;
		void displayContact(int index) const;
		void deleteContact(int index);
		void clearContacts();
};

#endif