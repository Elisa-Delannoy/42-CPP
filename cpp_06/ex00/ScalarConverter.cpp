/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:39:24 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/15 14:11:56 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <cmath>
#include <limits>

int	pseudo_literals(std::string to_convert)
{
	if (!to_convert.compare("-inff") || !to_convert.compare("+inff") || !to_convert.compare("nanf"))
		return (FLITERALS);
	if (!to_convert.compare("-inf") || !to_convert.compare("+inf") || !to_convert.compare("nan"))
		return (DLITERALS);
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

void	convert_to_int(std::string to_convert)
{
	int					i;
	std::stringstream	to_int(to_convert);
	to_int >> i;


	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(i))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

char	convert_to_char(std::string to_convert)
{
	char				c;
	std::stringstream	to_char(to_convert);
	to_char.get(c);

	std::cout << "char: '" << c << "'" << std::endl;
	
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	return (c);
}

void	convert_to_float(std::string to_convert, int literals)
{
	float				f;
	std::stringstream	to_float(to_convert);
	to_float >> f;

	if (literals != FLOAT)
	{
		char	*endptr;
		f = strtof(to_convert.c_str(), &endptr);
	}

	if (f < 0 || f > 127 || std::isnan(f))
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(f))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (f < std::numeric_limits<int>::min()|| f > std::numeric_limits<int>::max() || std::isnan(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << "float: ";
	if (std::isinf(f) && to_convert[0] == '+')
		std::cout << "+";
	std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: ";
	if (std::isinf(f) && to_convert[0] == '+')
		std::cout << "+";
	std::cout << static_cast<double>(f) << std::endl;
}

void	convert_to_double(std::string to_convert, int literals)
{
	double				d;
	std::stringstream	to_double(to_convert);
	to_double >> d;

	if (literals != DOUBLE)
	{
		char	*endptr;
		d = strtod(to_convert.c_str(), &endptr);
	}

	if (d < 0 || d > 127 || std::isnan(d))
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(d))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (d < std::numeric_limits<int>::min()|| d > std::numeric_limits<int>::max() || std::isnan(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: ";
	if (std::isinf(d) && to_convert[0] == '+')
		std::cout << "+";
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: ";
	if (std::isinf(d) && to_convert[0] == '+')
		std::cout << "+";
	std::cout << d << std::endl;
}

void ScalarConverter::convert(std::string to_convert)
{
	if (to_convert == "")
	{
		std::cout << "empty string" << std::endl;
		return;
	}
		
	switch (detect(to_convert))
	{
		case CHAR:
			convert_to_char(to_convert);
			break;
		case INT:
			convert_to_int(to_convert);
			break;
		case FLOAT:
			convert_to_float(to_convert, FLOAT);
			break;
		case DOUBLE:
			convert_to_double(to_convert, DOUBLE);
			break;
		case FLITERALS:
			convert_to_float(to_convert, FLITERALS);
			break;
		case DLITERALS:
			convert_to_double(to_convert, DLITERALS);
			break;
		case ERROR:
			std::cout << "error" << std::endl;
			break;
	}
}
