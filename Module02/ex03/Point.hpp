/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalia <natalia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:46:59 by natalia           #+#    #+#             */
/*   Updated: 2022/09/23 10:14:09 by natalia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		/* Constructors */
		Point();
		Point(const Point &copy);
		Point(float const x, float const y);
		
		/*  Destructor */
		~Point();
		
		/* Operators */
		Point & operator=(const Point &assign);
		
		/* Getters/Setters */
		Fixed const getX() const;
		Fixed const getY() const;
		
	private:
		Fixed const _x;
		Fixed const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif