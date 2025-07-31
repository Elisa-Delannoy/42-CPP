/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:05:27 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/31 14:40:59 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <stdlib.h>

BitcoinExchange::BitcoinExchange()
{
	// this->_data["default"] = 0;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
}

const BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	if (this != &copy)
		this->_data = copy._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::stock_data()
{
	std::ifstream	file("data.csv", std::ios::in);
	if (!file)
	{
		std::cerr << "Error: could not open file" << std::endl;
		return;
	}
	std::string	line;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string	date;
		float		price;
		
		date = line.substr(0, line.find(','));
		price = atof(line.substr(line.find(',') + 1).c_str());
		
		_data[date] = price;
	
		// std::cout << date << " -> " << _data[date] << std::endl;
	}
	file.close();
}

int	check_date(std::string line, int *i)
{
	for (; *i < 10; (*i)++)
	{
		if (*i == 4 || *i == 7)
		{
			if (line[*i] != '-')
				return (0);
		}
		else if (!isdigit(line[*i]))
			return (0);
	}
	return (1);
}

float	check_value(std::string line)
{
	float	value;
	value = atof(line.c_str());

	if (value < 0)
		return (std::cout << "Error: not a positive number." << std::endl, -1);
	else if (value > 1000)
		return (std::cout << "Error: too large a number => " << line << std::endl, -1);
	return (value);
}

void	BitcoinExchange::check_input(std::string line)
{
	int i;
	std::string	rate;

	i = 0;
	if (check_date(line, &i) == 0)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	if (line.compare(i, 3, " | "))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	i = i + 3;
	rate = line.substr(i);

	float value = check_value(rate);
	if (value == - 1)
		return ;
	std::cout << line.substr(0, 10) << " => " << value << std::endl;
}

