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

#ifndef SPAN_hpp
# define SPAN_HPP

# include <exception>
# include <vector>

class Span
{
	private:
		unsigned int			_nbElement;
		std::vector<int>		_stock:
		vector::const_iterator	_it;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		const Span& operator=(const Span& copy);
		~Span();

		void 			addNumnber(const int& nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class TooManyElementsException : public std::exception
		{
			public:
				const char* what()const throw()
		};

		class NotEnoughElementException : public std::exception
		{
			public:
				const char* what()const throw()
		};
}

#endif