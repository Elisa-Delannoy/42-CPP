/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:28:53 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/16 13:59:12 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "iostream"

int main()
{
	int x = 10;
	int y = 4;
	
	::swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;

	std::cout << "min = " << ::min(x, y) << std::endl;
	
	std::cout << "max = "<< ::max(x, y) << std::endl;

	float u = 45.6f;
	float v = 38.0f;
	
	::swap(u, v);
	std::cout << "\nu = " << u << ", v = " << v << std::endl;

	std::cout << "min = " << ::min(u, v) << std::endl;
	
	std::cout << "max = "<< ::max(u, v) << std::endl;

	double e = 104.8;
	double f = 42.6;
	
	::swap(e, f);
	std::cout << "\ne = " << e << ", f = " << f << std::endl;

	std::cout << "min = " << ::min(e, f) << std::endl;
	
	std::cout << "max = "<< ::max(e, f) << std::endl;


	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "\na = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
	
}