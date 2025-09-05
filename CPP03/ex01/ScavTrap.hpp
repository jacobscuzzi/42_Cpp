/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-05 15:59:23 by jbaumfal          #+#    #+#             */
/*   Updated: 2025-09-05 15:59:23 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);
		void attack(const std::string& target);
		void guardGate();
};
