/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:46:50 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/29 23:42:14 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

const Fixed	area(Point const& a, Point const& b, Point const& c)
{
	Fixed	area(((a.get_x() * (b.get_y() - c.get_y()))
		+ (b.get_x() * (c.get_y() - a.get_y()))
		+ (c.get_x() * (a.get_y() - b.get_y()))).abs() / Fixed(2));
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	t_area = area(a, b, c);
	Fixed	area1 = area(a, b, point);
	Fixed	area2 = area(a, c, point);
	Fixed	area3 = area(b, c, point);
	
	if (area1 != Fixed(0) && area2 != Fixed(0) && area3 != Fixed(0)
		&& area1 + area2 + area3 == t_area)
		return (true);
	else
		return (false);
}