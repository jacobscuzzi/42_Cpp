/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:27:28 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/09/01 16:28:52 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
	private:
		int						rawBits;
		static const int		fracionalBits = 8;	
	public:
								Fixed();\
								Fixed(const int int_num);
								Fixed(const float float_num);
								~Fixed();
								Fixed(const Fixed& other);
		Fixed&					operator=(const Fixed& other);
		void					setRawBits( int const raw );
		int						getRawBits( void ) const;
		float					toFloat( void ) const;
		int						toInt(void) const;

		bool					operator==(const Fixed &other) const;
		bool					operator!=(const Fixed &other) const;
		bool					operator<(const Fixed &other) const;
		bool					operator<=(const Fixed &other) const;
		bool					operator>(const Fixed &other) const;
		bool					operator>=(const Fixed &other) const;

		Fixed					operator+(const Fixed &other) const;
		Fixed					operator-(const Fixed &other) const;
		Fixed					operator*(const Fixed &other) const;
		Fixed					operator/(const Fixed &other) const;
		
		friend std::ostream&	operator<<(std::ostream& stream, const Fixed& object);
};