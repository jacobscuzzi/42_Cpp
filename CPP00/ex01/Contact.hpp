/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:22:51 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/09 22:23:13 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <unistd.h>
# include <iostream>
# include <string>
# include <cstdlib>

class Contact
{

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		void		setFirstName(std::string input);
		void		setLastName(std::string input);
		void		setNickName(std::string input);
		void		setPhoneNumber(std::string input);
		void		setDarkestSecret(std::string input);
		void		printContact();
};

#endif