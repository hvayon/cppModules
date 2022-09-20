/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:55 by natalia           #+#    #+#             */
/*   Updated: 2022/09/20 10:48:13 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	
	private:
		int					_fixed;
		const static int    _bits;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed& copy);
		Fixed &operator = (const Fixed& op);
		
		int     getRawBits( void ) const;
		void    setRawBits( int const raw );
};

#endif