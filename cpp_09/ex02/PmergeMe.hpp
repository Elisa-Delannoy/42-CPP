/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:46:57 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/07 17:55:08 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>

class PmergeMe
{
	private:
		std::vector<int>	_input;
		std::deque<int>		_inputdeque;
		std::vector<int>	_vecmin;
		std::vector<int>	_vecmax;
		std::deque<int>		_deqmin;
		std::deque<int>		_deqmax;
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		const PmergeMe& operator=(const PmergeMe& copy);
		~PmergeMe();

		void	VectorFordJohnsonDivide(std::vector<int>::iterator it);
		void	DequeFordJohnsonDivide(std::deque<int>::iterator it);
		void	ParseInput(int argc, char **argv);
		void	ExcecVector();
		void	ExcecDeque();
		template<typename T>
		void	TabMaxMin(T tab1, T tab2);
		int		VectorFordJohnsonSort(std::vector<int>::iterator itmin, int begin, int end);
		int		DequeFordJohnsonSort(std::deque<int>::iterator itmin, int begin, int end);
		// void	SortTab();
		// void	InsertMin(std::vector<int>::iterator it, std::vector<int>::iterator itmx, int n);
		// void	InsertMax(std::vector<int>::iterator it, std::vector<int>::iterator itmx);
};

#endif