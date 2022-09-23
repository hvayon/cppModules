/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:58 by natalia           #+#    #+#             */
/*   Updated: 2022/09/22 20:58:09 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = value * (1 << _bits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(value * (1 << _bits));
}

int	Fixed::getRawBits( void ) const {
	return _fixed;
}

void	Fixed::setRawBits( int const raw ) {
	_fixed = raw;
}

float Fixed::toFloat( void ) const {
	return (float)_fixed / (float)(1 << _bits);
}

int	Fixed::toInt( void ) const {
	return _fixed/(1 << _bits);
}

Fixed &Fixed::operator = (const Fixed& op) {
	std::cout << "Copy assignment operator called" << std::endl;
    _fixed = op.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}

const int Fixed::_bits = 8;