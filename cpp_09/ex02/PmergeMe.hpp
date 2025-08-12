/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:46:57 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/11 10:18:22 by edelanno         ###   ########.fr       */
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
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		const PmergeMe& operator=(const PmergeMe& copy);
		~PmergeMe();

		std::vector<int>	VectorFordJohnsonDivide(std::vector<int>& container);
		std::deque<int>		DequeFordJohnsonDivide(std::deque<int>& container);
		void				ParseInput(int argc, char **argv);
		void				ExcecVector();
		void				ExcecDeque();
		template<typename T>
		void				TabMaxMin(int tab1, int tab2, T& max, T& min);
		int					VectorFordJohnsonSort(int to_insert, int begin, int end, std::vector<int>& max);
		int					DequeFordJohnsonSort(int to_insert, int begin, int end, std::deque<int>& max);
};

#endif