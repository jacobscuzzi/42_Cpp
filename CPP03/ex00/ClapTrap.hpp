/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-05 11:31:52 by jbaumfal          #+#    #+#             */
/*   Updated: 2025-09-05 11:31:52 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include	<string>



class ClapTrap
{
private:
	std::string		name_;
	unsigned int	hit_points_;
	unsigned int	energy_points_;
	unsigned int	attack_dammage_;

public:
					ClapTrap();
					ClapTrap(ClapTrap &other);
					ClapTrap(std::string name);
					~ClapTrap();
	ClapTrap&		operator=(const ClapTrap& other);
	void 			attack(const std::string& target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);
};

#endif