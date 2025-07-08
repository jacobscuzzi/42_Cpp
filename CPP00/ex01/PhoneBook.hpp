/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:24:08 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/08 17:44:48 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <unistd.h>
# include <iostream>
# include <string>
# include <cstdlib>

# include "Contact.hpp"
# include "tools.hpp"


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
		void	add();
		void	search();
		void	exit();
		void	execute_command(pb_command command);
		void	printContactPreview();
		
};

#endif