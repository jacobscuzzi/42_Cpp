/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:22:51 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/06/17 19:48:54 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

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
		setFirstName(std:string input);
		setLastName(std::string input);
		setNickName(std::string input);
		setPhoneNumber(std::string input);
		setDarkestSecret(std::string input);
};

#endif