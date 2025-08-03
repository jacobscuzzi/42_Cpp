/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:30 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:31 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
class HumanA
{
	private:
		std::string	_name;
		Weapon &_arm;
	public:
		HumanA(std::string name, Weapon& arm);
		~HumanA();
		void	attack();
};

#endif