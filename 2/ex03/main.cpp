/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:05:10 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/29 23:20:54 by edelanno         ###   ########.fr       */
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

	if (bsp(a, b, c, point))
		std::cout << "(" << point.get_x() << ", " << point.get_y()
			<< ") is inside triangle" << std::endl;
	else
		std::cout << "(" << point.get_x() << ", " << point.get_y()
			<< ") is outside triangle" << std::endl;
	return (0);
}
