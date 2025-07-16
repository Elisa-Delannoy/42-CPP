/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:03:52 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/16 16:45:39 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

void print_int(int &x)
{
	std::cout << x << std::endl;
}

void print_double(const double& x)
{
	std::cout << x << std::endl;
}

void print_float(const float& x)
{
	std::cout << x << std::endl;
}

void print_char(const char& c)
{
	std::cout << c;
}


int main()
{
	int		int_array[]  = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	double	double_array[] = {1.2, 2.5, 3.0, 4.5, 5.7, 6.9, 7.6, 8.7, 9.3};
	float	float_array[] = {1.2f, 2.5f, 3.0f, 4.5f, 5.7f, 6.9f, 7.6f, 8.7f, 9.3f};
	char	char_array[] = "bonjour\n";

	std::cout << "int:"  << std::endl;
	::iter(int_array, 8, print_int);

	std::cout << "\ndouble:"  << std::endl;
	::iter(double_array, 8, print_double);

	std::cout << "\nfloat:"  << std::endl;
	::iter(float_array, 8, print_float);

	std::cout << "\nchar:"  << std::endl;
	::iter(char_array, 8, print_char);
}
