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


Spann::Span() : _nbElement(0)
{
}

Spann::Span(unsigned int N) : _nbElement(N)
{
}

Spann::Span(const Span& copy) : _nbElement(copy._nbElement)
{
}

const Span& Spann::operator=(const Span& copy) : _nbElement(copy._nbElement)
{
	return (*this);
}

Spann::~Span()
{

}

void 	Span:addNumnber(const int& nb)
{
	if (_it >= nb)
		throw TooManyElementsException()
	_stock.push_back(nb);
	_it++;
}

unsigned int	Span::shortestSpan()
{
	int	shortest;
	int	temp;

	if (_it < 1)
		throw NotEnoughElementException();
	shortest = 0;

	trier le tableau, set ?


	shortest = _stock[1] - _stock[0];
	for (int i = 0; i < _it, i++)
	{
		temp = _stock[i + 1] - _stock[i];
		if (shortest > temp)
			shortest = temp;
		i++;
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	int	min;
	int	max;

	
	if (_it < 1)
		throw NotEnoughElementException();
	min = _stock.min();
	max = _stock.max();

	return (max - min);
}

const char* Span::TooManyElementsException::what() const throw()
{
	return ("Too many elements, can not add more than ");
}

const char* Span::NotEnoughElementException::what() const throw()
{
	return ("Not enough element, span should hae atleast 2 elements ");
}


