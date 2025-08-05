/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulator.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:51 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/05 19:46:09 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "manipulator.hpp"

void	manipulator(std::ifstream &file, std::string filename,  std::string s1, std::string s2)
{
	std::string		line;
	std::ofstream	replace_file;
	std::string		replace_file_name;

	replace_file_name = filename + ".replace";
	replace_file.open(replace_file_name.c_str());
	
	while (getline(file, line))
	{
		
	}
}