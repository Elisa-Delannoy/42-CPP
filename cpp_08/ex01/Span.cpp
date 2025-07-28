/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:58:39 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/20 15:58:39 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <sstream>


Span::Span() : _nbElement(0), _stock(0)
{
}

Span::Span(unsigned int N) : _nbElement(N), _stock(0)
{
}

Span::Span(const Span& copy) : _nbElement(copy._nbElement), _stock(copy._stock)
{
}

const Span& Span::operator=(const Span& copy)
{
	this->_nbElement = copy._nbElement;
	this->_stock = copy._stock;
	return (*this);
}

Span::~Span()
{
}

void 	Span::addNumber(const int& nb)
{
	if (_stock.size() >= this->_nbElement)
	{
		std::ostringstream	error;
		error << "Too many elements, can not add more than " << this->_nbElement;
		throw std::length_error(error.str());
	}
	this->_stock.push_back(nb);
}

unsigned int	Span::shortestSpan()
{
	int	shortest;
	int	temp;
	std::vector<int>	sorted;

	if (_stock.size() < 2)
		throw std::length_error("Not enough element, span should have at least 2 elements");
	sorted = this->_stock;
	std::sort(sorted.begin(), sorted.end());
	shortest = sorted[1] - sorted[0];
	for (unsigned int i = 0; i < sorted.size() - 1; i++)
	{
		temp = sorted[i + 1] - sorted[i];
		if (shortest > temp)
			shortest = temp;
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	int	min;
	int	max;

	if (this->_stock.size() < 2)
		throw std::length_error("Not enough element, span should have at least 2 elements");
	min = *std::min_element(_stock.begin(), _stock.end());
	max = *std::max_element(_stock.begin(), _stock.end());

	return (max - min);
}




