/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:55 by natalia           #+#    #+#             */
/*   Updated: 2022/09/21 13:31:19 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
#include <fstream>

class Fixed {
	
	private:
		int					_fixed;
		const static int    _bits;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed& copy);
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator = (const Fixed& op);
		
		int     getRawBits( void ) const;
		void    setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif