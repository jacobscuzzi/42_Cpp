/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:09 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:01:10 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
# include <unistd.h>


// Class Definittion
class Zombie{
	private:
		std::string _name;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

// Function prototypes
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif