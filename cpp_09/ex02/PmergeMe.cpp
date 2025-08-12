/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:46:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/11 10:14:43 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdlib.h>
#include <sstream>
#include <stdexcept>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <iomanip>

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
		this->_inputdeque = copy._inputdeque;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
	
}

template<typename T>
void	PmergeMe::TabMaxMin(int tab1, int tab2, T& max, T& min)
{
	if (tab1 > tab2)
	{
		max.push_back(tab1);
		min.push_back(tab2);
	}
	else
	{
		max.push_back(tab2);
		min.push_back(tab1);
	}
}

std::vector<int>	PmergeMe::VectorFordJohnsonDivide(std::vector<int>& container)
{
	std::vector<int>	max;
	std::vector<int>	min;
	int					stock = -1;
	
	if (container.size() <= 1)
		return container;
	for (std::vector<int>::iterator it = container.begin(); it < container.end() ; it += 2)
	{
		if (it + 1 < container.end())
			TabMaxMin(*it, *(it + 1), max, min);
		else
			stock = *it;
	}

	std::vector<int>	result = VectorFordJohnsonDivide(max);
	for (std::vector<int>::iterator itmin = min.begin(); itmin != min.end(); itmin++)
		VectorFordJohnsonSort(*itmin, 0, result.size(), result);
	if (stock != -1)
		VectorFordJohnsonSort(stock, 0, result.size(), result);
	return (result);
}

int	PmergeMe::VectorFordJohnsonSort(int to_insert, int begin, int end, std::vector<int>& max)
{
	if (begin >= end)
		return (0);
	int part = (begin + end) / 2;
	std::vector<int>::iterator	itmx = max.begin() + part;

	if (to_insert <= *itmx)
	{
		if (itmx == max.begin() || (itmx != max.begin() && to_insert >= *(itmx - 1)) || to_insert == *itmx)
			return (max.insert(itmx, to_insert), 1);
		return (VectorFordJohnsonSort(to_insert, begin, part, max));
	}
	else if (to_insert > *itmx)
	{
		if (itmx + 1 == max.end())
			return (max.insert(max.end(), to_insert), 1);
		if (itmx + 1 != max.end() && to_insert < *(itmx + 1))
			return (max.insert(itmx + 1, to_insert), 1);
		return (VectorFordJohnsonSort(to_insert, part + 1, end, max));
	}
	return (0);
}

std::deque<int>	PmergeMe::DequeFordJohnsonDivide(std::deque<int>& container)
{
	std::deque<int>		max;
	std::deque<int>		min;
	int					stock = -1;
	
	if (container.size() <= 1)
		return container;
	for (std::deque<int>::iterator it = container.begin(); it < container.end() ; it += 2)
	{
		if (it + 1 < container.end())
			TabMaxMin(*it, *(it + 1), max, min);
		else
			stock = *it;
	}

	std::deque<int>	result = DequeFordJohnsonDivide(max);
	for (std::deque<int>::iterator itmin = min.begin(); itmin != min.end(); itmin++)
		DequeFordJohnsonSort(*itmin, 0, result.size(), result);
	if (stock != -1)
		DequeFordJohnsonSort(stock, 0, result.size(), result);
	return (result);
}

int	PmergeMe::DequeFordJohnsonSort(int to_insert, int begin, int end, std::deque<int>& max)
{
	if (begin >= end)
		return (0);
	int part = (begin + end) / 2;
	std::deque<int>::iterator	itmx = max.begin() + part;

	if (to_insert <= *itmx)
	{
		if (itmx == max.begin() || (itmx != max.begin() && to_insert >= *(itmx - 1)) || to_insert == *itmx)
			return (max.insert(itmx, to_insert), 1);
		return (DequeFordJohnsonSort(to_insert, begin, part, max));
	}
	else if (to_insert > *itmx)
	{
		if (itmx + 1 == max.end())
			return (max.insert(max.end(), to_insert), 1);
		if (itmx + 1 != max.end() && to_insert < *(itmx + 1))
			return (max.insert(itmx + 1, to_insert), 1);
		return (DequeFordJohnsonSort(to_insert, part + 1, end, max));
	}
	return (0);
}

template<typename T>
void	print(std::string print, T& container)
{
	std::cout << print;
	typename T::const_iterator	it = container.begin() ;
	for (; it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::ExcecVector()
{
	print("Before: ", this->_input);
	
	clock_t	start = clock();
	std::vector<int>	result = VectorFordJohnsonDivide(this->_input);
	clock_t	end = clock();
	double tvec = double(end - start) / CLOCKS_PER_SEC * 1000000;
	
	print("After:  ", result);
	std::cout << "Time to process a range of:  " << _input.size() << " elements with std::vector: "
		<< std::fixed << std::setprecision(1) << tvec << " us" << std::endl;
}


void	PmergeMe::ExcecDeque()
{
	clock_t	start = clock();
	std::deque<int>	result = DequeFordJohnsonDivide(this->_inputdeque);
	clock_t	end = clock();
	double tdeq = double(end - start) / CLOCKS_PER_SEC * 1000000;;
	
	std::cout << "Time to process a range of:  " << _inputdeque.size() << " elements with std::deque: "
		<< std::fixed << std::setprecision(1) << tdeq << " us" << std::endl;
}

void	PmergeMe::ParseInput(int argc, char **argv)
{
	int					nb;
	std::stringstream	s_input;
	
	for (int i = 1; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j] == '0' && argv[i][j + 1])
			j++;
		std::string	in = argv[i] + j;
		nb = atoi(in.c_str());
		s_input << nb;
		if (s_input.str() != in || nb < 0)
			throw std::invalid_argument("Error: bad argument");
		s_input.str("");
		s_input.clear();
		this->_input.push_back(nb);
		this->_inputdeque.push_back(nb);
	}
}
