/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-05 14:20:24 by jbaumfal          #+#    #+#             */
/*   Updated: 2025-09-05 14:20:24 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
    ClapTrap robot1("Robot1");
    
    robot1.attack("Enemy");
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    
    ClapTrap robot2("Robot2");
    robot2.attack("Target");
    robot2.takeDamage(15);
    robot2.attack("AnotherTarget");
    
    return 0;
}

