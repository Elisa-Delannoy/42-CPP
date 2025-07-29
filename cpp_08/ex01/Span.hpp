/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:58:43 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/20 15:58:43 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{ 
	private:
		unsigned int		_nbElement;
		std::vector<int>	_stock;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		const Span& operator=(const Span& copy);
		~Span();

		void 			addNumber(const int& nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template<typename T>
		void	addMultipleNumbers(const T& tab)
		{
			_stock.insert(_stock.end(), tab.begin(), tab.end());
		};
};

#endif