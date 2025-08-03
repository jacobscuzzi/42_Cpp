/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:49 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:50 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Zombie.hpp"
 
 Zombie* zombieHorde( int N, std::string name )
 {
	Zombie *zombie_horde;

	if (N < 1)
	{
		std::cout << "I need a number that is bigger than 0 bro" << std::endl;
		return nullptr;
	}
	zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].setName(name);
	}
	return zombie_horde;
}

