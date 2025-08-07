/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:46:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/07 18:15:11 by edelanno         ###   ########.fr       */
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

void	PmergeMe::VectorFordJohnsonDivide(std::vector<int>::iterator it)
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
			VectorFordJohnsonDivide(it + 2);
	}
}

int	PmergeMe::VectorFordJohnsonSort(std::vector<int>::iterator	itmin, int begin, int end)
{
	int part = (begin + end) / 2;
	std::vector<int>::iterator	itmx = _vecmax.begin() + part;

	if (*itmin <= *itmx)
	{
		
		if (itmx == _vecmax.begin() || (itmx != _vecmax.begin() && *itmin >= *(itmx - 1)) || *itmin == *itmx)
			return (_vecmax.insert(itmx, *itmin), 1);
		VectorFordJohnsonSort(itmin, begin, part);
	}
	else if (*itmin > *itmx)
	{
		if (itmx + 1 != _vecmax.end() && *itmin < *(itmx + 1))
			return (_vecmax.insert(itmx + 1, *itmin), 1);
		VectorFordJohnsonSort(itmin, part + 1, end);
	}
	return (0);
}

void	PmergeMe::DequeFordJohnsonDivide(std::deque<int>::iterator it)
{
	if (it != this->_inputdeque.end())
	{
		if (_input.size() % 2 != 0 && it + 1 == _inputdeque.end())
		{
			_vecmax.push_back(*it);
			return ;
		}
		TabMaxMin(*it, *(it + 1));
		if (it + 1 != this->_inputdeque.end() && it + 2 != this->_inputdeque.end())
			DequeFordJohnsonDivide(it + 2);
	}
}

int	PmergeMe::DequeFordJohnsonSort(std::deque<int>::iterator itmin, int begin, int end)
{
	int part = (begin + end) / 2;
	std::deque<int>::iterator	itmx = _deqmax.begin() + part;

	if (*itmin <= *itmx)
	{
		
		if (itmx == _deqmax.begin() || (itmx != _deqmax.begin() && *itmin >= *(itmx - 1)) || *itmin == *itmx)
			return (_deqmax.insert(itmx, *itmin), 1);
		DequeFordJohnsonSort(itmin, begin, part);
	}
	else if (*itmin > *itmx)
	{
		if (itmx + 1 != _deqmax.end() && *itmin < *(itmx + 1))
			return (_deqmax.insert(itmx + 1, *itmin), 1);
		DequeFordJohnsonSort(itmin, part + 1, end);
	}
	return (0);
}

template<typename T>
void	print(std::string print, T container)
{
	std::cout << print;
	typename T::const_iterator	it = container.begin() ;
	for (; it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

// void	PmergeMe::SortTab()
// {
// 	for (std::vector<int>::iterator it = _vecmax.begin(); it != _vecmax.end(); it++)
// 	{
// 		if ()
// 	}
// }

void	PmergeMe::ExcecVector()
{
	std::vector<int>::iterator	it = this->_input.begin();
	
	print("Before: ", this->_input);
	
	clock_t	tvec = clock();
	VectorFordJohnsonDivide(it);
	std::sort(_vecmax.begin(), _vecmax.end());
	
	
	for (std::vector<int>::iterator	itmin = _vecmin.begin(); itmin != _vecmin.end(); itmin++)
	VectorFordJohnsonSort(itmin, 0, _vecmax.size());
	tvec = double(clock() - tvec) / CLOCKS_PER_SEC * 1000000;
	
	print("After:  ", this->_vecmax);
	std::cout << "Time to process a range of:  " << _input.size() << " elements with std::vector: "
		<< tvec << " us" << std::endl;
}




void	PmergeMe::ExcecDeque()
{
	std::deque<int>::iterator	it = this->_inputdeque.begin();
	
	
	clock_t	tdeq = clock();
	DequeFordJohnsonDivide(it);
	std::sort(_deqmax.begin(), _deqmax.end());
	
	
	for (std::deque<int>::iterator	itmin = _deqmin.begin(); itmin != _deqmin.end(); itmin++)
	DequeFordJohnsonSort(itmin, 0, _deqmax.size());
	tdeq = double(clock() - tdeq) / CLOCKS_PER_SEC * 1000000;
	
	print("After:  ", this->_deqmax);
	std::cout << "Time to process a range of:  " << _inputdeque.size() << " elements with std::deque: "
		<< tdeq << " us" << std::endl;
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
		this->_inputdeque.push_back(nb);
	}
}
