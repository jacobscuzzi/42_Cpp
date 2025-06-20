/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:08 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/17 19:47:54 by jbaumfal         ###   ########.fr       */
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

class	PhoneBook
{
	private:
		Contact contacts[8];
		int totalContacts;
		int currentIndex;

	public:
		PhoneBook();
		~PhoneBook();
		void	add(const Contact& contact);
		void	search() const;
		void	exit();
		void	displayContact(int index) const;
		void	deleteContact(int index);
		void	clearContacts();
};

#endif