/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:27:28 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/09/04 19:15:23 by jbaumfal         ###   ########.fr       */
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

		Fixed					&operator++( void );
		Fixed					&operator--( void );
		Fixed					operator++( int );
		Fixed					operator--( int );

		static  Fixed&		max(Fixed &a, Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);
		static Fixed&		min(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);


		
		
		friend std::ostream&	operator<<(std::ostream& stream, const Fixed& object);
};