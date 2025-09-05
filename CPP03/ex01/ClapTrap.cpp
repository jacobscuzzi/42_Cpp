/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-05 11:23:22 by jbaumfal          #+#    #+#             */
/*   Updated: 2025-09-05 11:23:22 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
	name_ = "";
	hit_points_ = 10;
	energy_points_ = 10;
	attack_dammage_ = 0;
}
ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	name_ = other.name_;
	hit_points_ = other.hit_points_;
	energy_points_ = other.energy_points_;
	attack_dammage_ = other.attack_dammage_;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Naming Constructor called" << std::endl;
	name_ = name;
	hit_points_ = 10;
	energy_points_ = 10;
	attack_dammage_ = 0;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Decunstructor called" << std::endl;
}
ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{ 
		name_ = other.name_;
		hit_points_ = other.hit_points_;
		energy_points_ = other.energy_points_;
		attack_dammage_ = other.attack_dammage_;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

void 	ClapTrap::attack(const std::string& target)
{
	if (energy_points_ == 0)
	{
		std::cout << "ClapTrap " 
					<< name_ 
					<< " has no energy points left to attack." 
					<< std::endl;
	}
	else if (hit_points_ == 0)
	{
		std::cout << "ClapTrap "
					<< name_ 
					<< " has no hit points left to attack." 
					<< std::endl;
	}
	else if (target.empty())
	{
		std::cout << "ClapTrap " 
					<< name_ 
					<< " cannot attack because no target was specified." 
					<< std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap " 
				<< name_ 
				<< " attacks " 
				<< target 
				<< ", causing " 
				<< attack_dammage_
				<< " points of damage!" 
				<< std::endl;
		energy_points_--;
	}
	return ;
}
void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hit_points_)
	{
		hit_points_ = 0;
		std::cout << "Killlll!!! ClapTrap " 
					<< name_ 
					<< " has taken " 
					<< amount 
					<< " points of damage and is now out of hit points and therefore dead! RIP <3" 
					<< std::endl;
	}
	else
	{
		hit_points_ -= amount;
		std::cout << "Ouchhh!!! ClapTrap " 
					<< name_ 
					<< " has taken " 
					<< amount 
					<< " points of damage and now has " 
					<< hit_points_ 
					<< " hit points left!" 
					<< std::endl;
	}
}
void 	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points_ == 0)
	{
		std::cout << "ClapTrap " 
					<< name_ 
					<< " has no energy points left to be repaired." 
					<< std::endl;
		return ;
	}
	else if (hit_points_ == 0)
	{
		std::cout << "ClapTrap "
					<< name_ 
					<< " has no hit points left to be repaired." 
					<< std::endl;
		return ;
	}
	else
	{
		hit_points_ += amount;
		energy_points_--;
		std::cout << "ClapTrap " 
					<< name_ 
					<< " has been repaired by " 
					<< amount 
					<< " points!" 
					<< std::endl;
	}
	return ;
}