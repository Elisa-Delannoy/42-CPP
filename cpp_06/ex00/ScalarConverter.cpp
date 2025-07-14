/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:39:24 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 20:30:26 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>


int	pseudo_literals(std::string to_convert)
{
	if (to_convert.compare("-inff") == 0)
		return (NINFF);
	if (to_convert.compare("inff") == 0)
		return (INFF);
	if (to_convert.compare("-inf") == 0)
		return (NINF);
	if (to_convert.compare("inf") == 0)
		return (INF);
	if (to_convert.compare("nan") == 0)
		return (NAN);
	if (to_convert.compare("nanf") == 0)
		return (NANF);
	return (-1);
}

bool	parse_to_check(std::string to_convert)
{
	for (int i = 0; i < static_cast<int>(to_convert.length()); i++)
	{
		if (i == 0 && to_convert[0] == '-')
			i++;
		if (to_convert[i] && !std::isdigit(to_convert[i]) && to_convert[i] != '.')
		{
			if (i == static_cast<int>(to_convert.length()) - 1 && to_convert[i] == 'f')
				return (true);
			return (false);
		}
	}
	return (true);
}

int	detect(std::string to_convert)
{
	int	check = parse_to_check(to_convert);
	int	pseudo_lit = pseudo_literals(to_convert);

	if (to_convert.length() == 1 && !std::isdigit(to_convert[0]))
		return (CHAR);
	if (pseudo_lit != -1)
		return (pseudo_lit);
	if (check == false)
		return (ERROR);
	if (to_convert.find('.') != std::string::npos 
		&& to_convert[to_convert.length() - 1] == 'f')
		return (FLOAT);
	if (to_convert.find('.') != std::string::npos)
		return (DOUBLE);
	return (INT);
}


int	convert_to_int(std::string to_convert)
{
	int	i;
	std::stringstream to_int(to_convert);
	to_int >> i;

	char	c = static_cast<char>(i);
	if (c < 20 || c > 126 )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;

	return (i);
}

char	convert_to_char(std::string to_convert)
{
	char	c;
	std::stringstream to_int(to_convert);
	to_int >> c;

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	return (c);
}

float	convert_to_float(std::string to_convert)
{
	float	f;
	std::stringstream to_int(to_convert);
	to_int >> f;

	char	c = static_cast<char>(f);
	if (c < 20 || c > 126 )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
	return (f);
}

double	convert_to_double(std::string to_convert)
{
	double	d;
	std::stringstream to_int(to_convert);
	to_int >> d;
	
	char	c = static_cast<char>(d);
	if (c < 20 || c > 126 )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << d << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return (d);
}


void ScalarConverter::convert(std::string to_convert)
{
	int	i = detect(to_convert);
	switch (i)
	{
		case (CHAR):
			std::cout << "char" << std::endl;
			convert_to_char(to_convert);
			break;
		case (INT):
			std::cout << "int" << std::endl;
			convert_to_int(to_convert);
			break;
		case (FLOAT):
			std::cout << "float" << std::endl;
			convert_to_float(to_convert);
			break;
		case (DOUBLE):
			std::cout << "double" << std::endl;
			convert_to_double(to_convert);
			break;
		case (NINFF):
			std::cout << "-inff" << std::endl;
			convert_to_float(to_convert);
		// case (INFF):
		// 	std::cout << "-inff" << std::endl;
		// 	convert_to_float(to_convert);
		// 	break;
		case (ERROR):
			std::cout << "error" << std::endl;
			break;
	}
}



