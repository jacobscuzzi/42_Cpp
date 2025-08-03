/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:13 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:14 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arm) : _name(name), _arm(arm)
{
	std::cout << "Once upon a time there was a new Human, of the type A. His name was "
		<< _name << " and he was born with an arm of the type: " << _arm.getType() << std::endl;
	sleep(2);
}

HumanA::~HumanA()
{
	std::cout <<  "HumanA is dead. RIP. His name was " << _name << std::endl;
	sleep(2);
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their weapon: " << _arm.getType() << std::endl;
	sleep(2);
}