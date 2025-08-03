/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:23 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:24 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "Once upon a time there was a new Human, of the type B. His name was " << _name << std::endl;
	sleep(2);
}

HumanB::~HumanB()
{
	std::cout <<  "HumanB is dead. RIP. His name was " << _name << std::endl;
	sleep(2);
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their weapon:" << _arm->getType() << std::endl;
	sleep(2);
}

void	HumanB::setWeapon(Weapon &arm)
{
	_arm = &arm;
	std::cout <<  "THe Human B changes his arm to: " << _arm->getType() << std::endl;
	sleep(2);
}
