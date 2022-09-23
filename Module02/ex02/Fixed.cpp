/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:58 by natalia           #+#    #+#             */
/*   Updated: 2022/09/23 11:03:44 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	//std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::~Fixed( void ) {
	//std::cout << "Destructor called" << std::endl;
	 return;
}

Fixed::Fixed(const Fixed& copy) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


Fixed::Fixed(const int value) {
	//std::cout << "Int constructor called" << std::endl;
	this->_fixed = value * (1 << _bits);
}

Fixed::Fixed(const float value) {
	//std::cout << "Float constructor called" << std::endl;
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

std::ostream & operator<<(std::ostream & out, Fixed const &fix)
{
	out << fix.toFloat();
	return out;
}

Fixed &Fixed::operator=(const Fixed& op) {
	//std::cout << "Copy assignment operator called" << std::endl;
    _fixed = op.getRawBits();
    return *this;
}

/* >, <, >=, <=, ==, !=. */

bool	Fixed::operator>(const Fixed &obj) const {
	return(this->_fixed > obj.getRawBits());
}

bool	Fixed::operator<(const Fixed &obj) const {
	return(this->_fixed < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed &obj) const {
	return(this->_fixed >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed &obj) const {
	return(this->_fixed <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed &obj) const {
	return(this->_fixed == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed &obj) const {
	return(this->_fixed != obj.getRawBits());
}

/* +, -, *, / */ 

Fixed	Fixed::operator+(const Fixed &add) const {
	Fixed	res(add);
	res.setRawBits(res.getRawBits() + this->getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &ded) const {
	Fixed	res(ded);
	res.setRawBits(res.getRawBits() - this->getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &mult) const {
	Fixed	res(mult);
	res.setRawBits(res.getRawBits() * this->getRawBits() / (1 << _bits));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &div) const {
	Fixed	res(div);
	res.setRawBits((long)this->getRawBits() * (1 << _bits) / div.getRawBits());;
	return (res);
}

/* increment & decrement */

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	++this->_fixed;
	return (tmp);
}

Fixed &	Fixed::operator++(void) {
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	--this->_fixed;
	return (tmp);
}

Fixed &	Fixed::operator--(void) {
	this->_fixed--;
	return (*this);
}

/* min max */

Fixed &	Fixed::min(Fixed & comp1, Fixed & comp2) {
	if (comp1.getRawBits() < comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

const Fixed &	Fixed::min(const Fixed & comp1, const Fixed & comp2) {
	if (comp1.getRawBits() < comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

Fixed &	Fixed::max(Fixed & comp1, Fixed & comp2)
{
	if (comp1.getRawBits() > comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

const Fixed &	Fixed::max(const Fixed & comp1, const Fixed & comp2) {
	if (comp1.getRawBits() > comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

const int Fixed::_bits = 8;