/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:27:28 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/30 01:38:59 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
	private:
		int					rawBits;
		static const int	fracionalBits = 8;	
	public:
							Fixed();\
							Fixed(const int int_num);
							Fixed(const float float_num);
							~Fixed();
							Fixed(const Fixed& other);
		Fixed&				operator=(const Fixed& other);
		void				setRawBits( int const raw );
		int					getRawBits( void ) const;
		float				toFloat( void ) const;
		int					toInt(void) const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& object);