/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:26:07 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/07/15 21:00:41 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TOOLS_HPP
# define TOOLS_HPP

# include <unistd.h>
# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

void		print_search_banner();
void		print_banner();
void		print_new_contact_banner();

std::string	makeStringSizeTen(std::string input_string);
# endif