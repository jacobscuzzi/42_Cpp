/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:48 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/04 01:37:02 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "manipulator.hpp"

int	main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	if (argc != 4)
	{
		std::cout << "This program needs 3 arguments: Filename string_to_replace new_string" << std::endl;
		return 1;
	}
	(void)argv;
}

