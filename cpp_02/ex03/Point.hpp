/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:04:24 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/29 23:38:55 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const float a, const float b);
		Point(const Point& point);
		~Point();
		Point&	operator=(const Point& point) = delete;		
		
		const Fixed get_x() const;
		const Fixed get_y() const;
};
