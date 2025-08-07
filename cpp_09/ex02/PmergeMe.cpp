/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:46:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/07 17:22:04 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdlib.h>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <algorithm>
#include <ctime>

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

const PmergeMe& PmergeMe::operator=(const PmergeMe& copy)
{
	if (this != &copy)
	{
		this->_input = copy._input;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
}

template<typename T>
void	PmergeMe::TabMaxMin(T tab1, T tab2)
{
	if (tab1 > tab2)
	{
		_vecmax.push_back(tab1);
		_vecmin.push_back(tab2);
	}
	else
	{
		_vecmax.push_back(tab2);
		_vecmin.push_back(tab1);
	}
}

void	PmergeMe::VectorFordJohnson(std::vector<int>::iterator it)
{
	if (it != this->_input.end())
	{
		if (_input.size() % 2 != 0 && it + 1 == _input.end())
		{
			_vecmax.push_back(*it);
			return ;
		}
		TabMaxMin(*it, *(it + 1));
		if (it + 1 != this->_input.end() && it + 2 != this->_input.end())
			VectorFordJohnson(it + 2);
	}
}

int	PmergeMe::InsertSort(std::vector<int>::iterator	itmin, int begin, int end)
{
	int part = (begin + end) / 2;
	std::vector<int>::iterator	itmx = _vecmax.begin() + part;

	if (*itmin <= *itmx)
	{
		
		if (itmx == _vecmax.begin() || (itmx != _vecmax.begin() && *itmin >= *(itmx - 1)) || *itmin == *itmx)
			return (_vecmax.insert(itmx, *itmin), 1);
		InsertSort(itmin, begin, part);
	}
	else if (*itmin > *itmx)
	{
		if (itmx + 1 != _vecmax.end() && *itmin < *(itmx + 1))
			return (_vecmax.insert(itmx + 1, *itmin), 1);
		InsertSort(itmin, part + 1, end);
	}
	return (0);
}

void	print(std::string print, std::vector<int> container)
{
	std::cout << print;
	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

// void	PmergeMe::SortTab()
// {
// 	for (std::)
// }

void	PmergeMe::Excec()
{
	clock_t	tvec = clock();
	std::vector<int>::iterator	it = this->_input.begin();
	
	print("Before: ", this->_input);
	
	VectorFordJohnson(it);
	std::sort(_vecmax.begin(), _vecmax.end());
	
	tvec = double(clock() - tvec) / CLOCKS_PER_SEC * 1000000;
	
	for (std::vector<int>::iterator	itmin = _vecmin.begin(); itmin != _vecmin.end(); itmin++)
		InsertSort(itmin, 0, _vecmax.size());
	
	print("After:  ", this->_vecmax);
	std::cout << "Time to process a range of:  " << _input.size() << " elements with std::vector: "
		<< tvec << " us" << std::endl;
}

void	PmergeMe::ParseInput(int argc, char **argv)
{
	int					nb;
	std::stringstream	s_input;
	
	for (int i = 1; i < argc; i++)
	{
		std::string	in = argv[i];
		nb = atoi(in.c_str());
		s_input << nb;
		if (s_input.str() != in || nb < 0)
			throw std::invalid_argument("Error: argument should be a positive int");
		s_input.str("");
		s_input.clear();
		this->_input.push_back(nb);
	}
}
