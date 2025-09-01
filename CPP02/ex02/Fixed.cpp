/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:27:23 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/09/01 16:46:07 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constuctors

Fixed::Fixed()
{
	//std::cout << "Default Constructor Called" << std::endl;
	rawBits = 0;
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int int_num)
{
	
	//std::cout << "Int Constructor Called" << std::endl;
	rawBits = int_num << fracionalBits;
}

Fixed::Fixed(const float float_num)
{
	float scaled;

	//std::cout << "Float Constructor Called" << std::endl;
	scaled = float (float_num * (1 << fracionalBits));
	rawBits = (int) (roundf(scaled));
}


Fixed&	Fixed::operator=(const Fixed& other)
{
	Fixed&	return_ref = *this;

	
	//std::cout << "Copy assignment Operator Called" << std::endl;
	if (this != &other)
	{
		rawBits = other.getRawBits();
	}
	return (return_ref);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor Called" << std::endl;
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	rawBits = raw;
}
int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}


int	Fixed::toInt(void ) const
{
	int	return_value;

	return_value = this->getRawBits() >> fracionalBits;
	return(return_value);
}

float	Fixed::toFloat( void ) const
{
	float	return_value;

	return_value = (float) this->getRawBits() / (1 << fracionalBits);
	return(return_value);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed_number)
{
	stream << fixed_number.toFloat();
	return (stream);
}

// ===== COMPARISON OPERATORS =====

bool	Fixed::operator==(const Fixed &other) const
{
	return (rawBits == other.rawBits);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (rawBits != other.rawBits);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (rawBits < other.rawBits);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (rawBits <= other.rawBits);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (rawBits > other.rawBits);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (rawBits >= other.rawBits);
}