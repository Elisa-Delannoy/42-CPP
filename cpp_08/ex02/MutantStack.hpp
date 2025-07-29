/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:49:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/29 14:42:12 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};
		MutantStack& operator=(const MutantStack& copy) 
		{
			if (this != &copy)
				std::stack<T>::operator=(copy);
			return (*this);
		};
		~MutantStack() {};

		typedef typename	std::deque<T>::iterator iterator;
		iterator			begin() {return (this->c.begin());}
		iterator			end() {return (this->c.end());}
};

#endif