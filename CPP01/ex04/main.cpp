/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:48 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/05 19:39:05 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "manipulator.hpp"

int	main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::ifstream file;
	std::ifstream &file_ref = file;
	
	if (argc != 4)
	{
		std::cerr << "This program needs 3 arguments: Filename string_to_replace new_string" << std::endl;
		return 1;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.length() == 0 || s2.length() == 0 )
	{
		std::cerr << "This program needs 3 strings that have at least one character" << std::endl;
	}
	file.open(filename.c_str());
	if (file.fail())
	{
		std::cerr << "Cant open this file: " << filename << std::endl;
	}
	manipulator(file_ref, filename, s1, s2);
}

