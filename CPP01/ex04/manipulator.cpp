/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulator.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 23:01:51 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/08 16:41:42 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "manipulator.hpp"



void	manipulator(std::ifstream &file, std::string filename,  std::string s1, std::string s2)
{
	std::string		line;
	std::ofstream	replace_file;
	std::string		replace_file_name;
	size_t			cursor;
	size_t			finder;
	size_t			s1_len;
	size_t			s2_len;

	replace_file_name = filename + ".replace";
	replace_file.open(replace_file_name.c_str());
	s1_len = s1.length();
	s2_len = s2.length();

	while (std::getline(file, line))
	{
		cursor = 0;
		while(1)
		{
			finder = line.find(s1, cursor);
			if (finder != std::string::npos)
			{
				line.erase(finder, s1_len);
				line.insert(finder, s2);
				cursor = finder + s2_len;
			}
			else
				break ;
		}
		replace_file << line << std::endl;
	}
}
