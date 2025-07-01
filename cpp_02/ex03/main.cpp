/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:10 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/30 11:01:15 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <string>
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(5, 10);
	Point	point(5, 9);
	Point	d(0, 0);
	Point	e(10, 0);
	Point	f(5, 10);
	Point	pp(15, 9);

	if (bsp(a, b, c, point))
		std::cout << "(" << point.get_x() << ", " << point.get_y()
			<< ") is inside triangle" << std::endl;
	else
		std::cout << "(" << point.get_x() << ", " << point.get_y()
			<< ") is outside triangle" << std::endl;
	
			if (bsp(d, e, f, pp))
		std::cout << "(" << point.get_x() << ", " << point.get_y()
			<< ") is inside triangle" << std::endl;
	else
		std::cout << "(" << point.get_x() << ", " << point.get_y()
			<< ") is outside triangle" << std::endl;	
	return (0);
}
