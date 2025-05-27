/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:08 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/05/27 18:13:23 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact{

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret; 

	public:
		Contact();
		
	

}

class Phonebook {
	private:
		Contact contacts[8];
		int currentIndex;
		int totalContacts;

	public:
		Phonebook();
		void addContact(const Contact& contact);
		void searchContacts() const;
		void displayContact(int index) const;
		void deleteContact(int index);
		void clearContacts();
};`