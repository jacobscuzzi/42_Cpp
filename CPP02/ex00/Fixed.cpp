/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:27:23 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/28 15:16:00 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	numberValue = 0;
}

Fixed::Fixed(Fixed& other)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	Fixed&	return_ref = *this;

	
	std::cout << "Copy assignment Operator Called" << std::endl;
	if (this != &other)
	{
		numberValue = other.getRawBits();
	}
	return (return_ref);
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	numberValue = raw;
}
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->numberValue);
}