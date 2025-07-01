/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:04:20 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/30 11:03:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float a, const float b) : _x(a), _y(b)
{
}

Point::Point(const Point& point) : _x(point._x), _y(point._y)
{
}

Point::~Point()
{
}

Point&	Point::operator=(const Point& point)
{
	(void) point;
	return (*this);
}

const Fixed Point::get_x() const
{
	return (this->_x);
}

const Fixed Point::get_y() const
{
	return (this->_y);
}
