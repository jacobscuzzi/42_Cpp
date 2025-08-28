/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:27:28 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/08/28 14:28:31 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Fixed
{
	private:
		int					numberValue;
		static const int	fracionalBits = 8;	
	public:
							Fixed();
							~Fixed();
							Fixed(Fixed& other);
		Fixed&				operator=(const Fixed& other);
		void				setRawBits( int const raw );
		int					getRawBits( void ) const;
};