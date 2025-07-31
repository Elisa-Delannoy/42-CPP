/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:05:27 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/31 18:08:37 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <stdlib.h>
#include <iterator>

BitcoinExchange::BitcoinExchange()
{
	this->_date[1] = 31;
	this->_date[2] = 29;
	this->_date[3] = 31;
	this->_date[4] = 30;
	this->_date[5] = 31;
	this->_date[6] = 30;
	this->_date[7] = 31;
	this->_date[8] = 31;
	this->_date[9] = 30;
	this->_date[10] = 31;
	this->_date[11] = 30;
	this->_date[12] = 31;
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

void	BitcoinExchange::StockData()
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
	}
	file.close();
}

int	BitcoinExchange::CheckPreviousDate(std::string line)
{
	float	year;
	float	month;
	float	day;

	year = atof(line.substr(0, 4).c_str());
	month = atof(line.substr(6, 7).c_str());
	day = atof(line.substr(9, 10).c_str());

	if (year > 2025 || year < 0)
		return (-1);
	if (month > 12 || month < 1)
		return (-1);
	
	std::map<int, int>::iterator	itd;
	for(itd = this->_date.begin(); itd != this->_date.end(); ++itd)
	{
		if (day > this->_date[month] || day < 1)
			return (-1);
	}
	return (1);
}

int	BitcoinExchange::CheckDate(std::string line, int *i)
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
	if (CheckPreviousDate(line) == -1)
		return (0);
	return (1);
}

float	check_value(std::string line)
{
	float	value;
	value = atof(line.c_str());

	if (value < 0)
		return (std::cout << "Error: not a positive number." << std::endl, -1);
	else if (value > 1000)
		return (std::cout << "Error: too large a number. => " << line << std::endl, -1);
	return (value);
}

float	BitcoinExchange::CheckInput(std::string line)
{
	int	i;
	float value;

	i = 0;
	if (CheckDate(line, &i) == 0)
		return (std::cout << "Error: bad input => " << line.substr(0, 10) << std::endl, -1);
	if (line.compare(i, 3, " | "))
		return (std::cout << "Error: bad input => " << line.substr(0, 10) << std::endl, -1);
	i = i + 3;
	value = check_value(line.substr(i));
	if (value == -1)
		return (-1);
	return (value);
}

float	BitcoinExchange::FindRate(std::string line, float value)
{
	std::map<std::string, float>::iterator	it;
	for(it = this->_data.begin(); it != this->_data.end(); ++it)
	{
		
		if (it == this->_data.begin() && it->first.compare(line) > 0)
			return (std::cout << "Error: bad input => " << line << std::endl, -1);
		if (it->first.compare(line) == 0)
			return (std::cout << it->first << " => " << value << " = " << it->second * value << std::endl, 1);
		if (it->first.compare(line) > 0)
		{
			if (it != this->_data.begin() && (--it)->first.compare(line) < 0)
				return (std::cout << it->first << " => " << value << " = " << it->second * value << std::endl, 1);
			it++;
		}
	}
	return (1);
}
	

