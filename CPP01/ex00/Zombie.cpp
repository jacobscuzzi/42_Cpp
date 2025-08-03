/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:06 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:01:07 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "A new Zombie is born, its name is: " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "A zombie passed a way. RIP: " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ':' << ": BraiiiiiiinnnzzzZ..." << std::endl;
}