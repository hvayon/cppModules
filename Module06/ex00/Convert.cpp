/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:41:03 by hvayon            #+#    #+#             */
/*   Updated: 2022/10/29 13:03:06 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _err(false), _input(""), _val(0.0f) {
	return ;
}

const char*	Convert::BadStrException::what() const throw()
{
	return "Wrong input!";
}

Convert::Convert (const std::string &input) : _err(false), _input(input), _val(0.0f) {
	try {
		char *str = NULL;
		if (std::isprint(_input[0]) && !std::isdigit(_input[0]) && _input[1] == '\0')
			_val = _input[0];
		else {
			_val = std::strtod(_input.c_str(), &str);
			if (_val == 0.0f &&\
			(_input[0] != '+' && _input[0] != '-' && !std::isdigit(_input[0])))
				throw Convert::BadStrException();
			if (*str && std::strcmp(str, "f"))
				throw Convert::BadStrException();
		}
			
	}
	catch(const std::exception& e) {
		_err = true;
		std::cerr << e.what() << '\n';
	}
}

bool	Convert::getErr(void) const {
	return _err;
}

std::string	Convert::getInput(void) const {
	return _input;
}

double	Convert::getVal(void) const {
	return _val;
}

char	Convert::getChar(void) const
{
	return static_cast <char> (_val);
}

int		Convert::getInt(void) const
{
	return static_cast <int> (_val);
}

float	Convert::getFloat(void) const
{
	return static_cast <float> (_val);
}

double	Convert::getDouble(void) const
{
	return static_cast <double> (_val);
}

static void	printChar(std::ostream&	o, const Convert& c) {
	o << "char: ";
	if (std::isnan(c.getVal()) || std::isinf(c.getVal()) || \
	c.getVal() > static_cast <double> (std::numeric_limits<char>::max()) || \
	c.getVal() < static_cast <double> (std::numeric_limits<char>::min()))
	{
		o << "impossible" << std::endl;
		return ;
	}
	if (!std::isprint(c.getChar()))
	{
		o << "Non displayable" << std::endl;
		return;
	}
	o << '\'' << c.getChar() << '\''<< std::endl;
}

static void	printInt(std::ostream&	o, const Convert& c) {
	o << "int: ";
	if (isnan(c.getVal()) || isinf(c.getVal()) || \
	c.getVal() > static_cast <double> (std::numeric_limits<int>::max()) || \
	c.getVal() < static_cast <double> (std::numeric_limits<int>::min())) \
	{
		o << "impossible" << std::endl;
		return ;
	}
	o << c.getInt() << std::endl;
}

static void	printFloat(std::ostream&	o, const Convert& c) {
	o << "float: ";
	if (isnan(c.getFloat()) || isinf(c.getFloat())) {
		o << std::showpos << c.getFloat() << "f" << std::endl;
		return ;
	}
	if (floor(c.getVal()) == ceil(c.getVal()))
		o << c.getFloat() << ".0f" << std::endl;
	else
		o << c.getFloat() << "f" << std::endl;	
}

static void	printDouble(std::ostream& o, const Convert& c)
{
	o << "double: ";
	if (std::isnan(c.getVal()) || std::isinf(c.getVal()))
	{
		o << std::showpos << c.getDouble() << std::endl;
		return ;
	}
	if (floor(c.getVal()) == ceil(c.getVal()))
		o << c.getDouble() << ".0" << std::endl;
	else
		o << c.getDouble() << std::endl;
}

Convert::~Convert() {
	return ;
}

Convert& Convert::operator=(const Convert& assign)
{
	this->_err = assign.getErr();
	this->_input = assign.getInput();
	this->_val = assign.getVal();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Convert const &c) {
	if (c.getErr())
		return o;
	printChar(o, c);
	printInt(o, c);
	printFloat(o, c);
	printDouble(o, c);
	return o;
}