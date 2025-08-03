/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:45 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:01:46 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <unistd.h>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type_input);
		~Weapon();
		const std::string	getType(void);
		void				setType(std::string type);
};

#endif