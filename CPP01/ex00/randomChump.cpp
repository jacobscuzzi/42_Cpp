/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:18 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/03 23:01:19 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
 #include "Zombie.hpp"
 
 void randomChump( std::string name )
 {
	Zombie	new_zombie(name);

	new_zombie.announce();

 }