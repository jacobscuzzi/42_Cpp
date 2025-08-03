/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:00:46 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:00:47 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
# include <unistd.h>
#include <limits>  


// Class Definittion
class Zombie{
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

// Function prototypes
Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif