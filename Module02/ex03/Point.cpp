/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:47:04 by natalia           #+#    #+#             */
/*   Updated: 2022/09/23 10:58:06 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructors */
Point::Point() : _x(0), _y(0) { }

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY()) { }

Point::Point(float const x, float const y) : _x(x), _y(y){ }

/* Destructor */
Point::~Point() {
    return;
}


/* Operator */
Point & Point::operator=(const Point &assign) {
	(void)assign;
	return *this;
}

/* Getters */
Fixed const Point::getX() const {
	return _x;
}
Fixed const Point::getY() const {
	return _y;
}

