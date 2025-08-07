/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:46:57 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/07 17:21:45 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>

class PmergeMe
{
	private:
		std::vector<int>	_input;
		std::vector<int>	_vecmin;
		std::vector<int>	_vecmax;
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		const PmergeMe& operator=(const PmergeMe& copy);
		~PmergeMe();

		void	VectorFordJohnson(std::vector<int>::iterator it);
		void	ParseInput(int argc, char **argv);
		void	Excec();
		template<typename T>
		void	TabMaxMin(T tab1, T tab2);
		int		InsertSort(std::vector<int>::iterator	itmin, int begin, int end);
		void	SortTab();
		// void	InsertMin(std::vector<int>::iterator it, std::vector<int>::iterator itmx, int n);
		// void	InsertMax(std::vector<int>::iterator it, std::vector<int>::iterator itmx);
};

#endif