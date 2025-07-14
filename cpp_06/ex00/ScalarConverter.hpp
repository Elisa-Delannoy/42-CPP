/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:39:26 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 19:44:44 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <locale>

enum	type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	ERROR,
	NINFF,
	INFF,
	NANF,
	NINF,
	INF,
	NAN
};

class ScalarConverter
{
	public:
		static	void convert(std::string to_convert);
};

#endif