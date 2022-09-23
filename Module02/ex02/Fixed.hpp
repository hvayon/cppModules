/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:55 by natalia           #+#    #+#             */
/*   Updated: 2022/09/22 19:37:49 by natalia          ###   ########.fr       */
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

		Fixed&	operator=(const Fixed& op);
		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		Fixed	operator+(const Fixed &add) const;
		Fixed	operator-(const Fixed &ded) const;
		Fixed	operator*(const Fixed &mult) const;
		Fixed	operator/(const Fixed &div) const;

		Fixed 	operator++(int);
		Fixed&	operator++(void);
		Fixed	operator--(int);
		Fixed&	operator--(void);
		
		static Fixed&		min(Fixed & comp1, Fixed & comp2);
		static const Fixed&	min(const Fixed & comp1, const Fixed & comp2);
		static Fixed&		max(Fixed & comp1, Fixed & comp2);
		static const Fixed&	max(const Fixed & comp1, const Fixed & comp2);
		
		int     getRawBits( void ) const;
		void    setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif