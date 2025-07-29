/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:49:21 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/29 15:30:19 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "\nmstack = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "\n---COPY---\n" << std::endl;
	MutantStack<int>	cpy(mstack);
	MutantStack<int>::iterator itc = cpy.begin();
	MutantStack<int>::iterator itec = cpy.end();
	++itc;
	--itc;
	while (itc != itec)
	{
		std::cout << *itc << std::endl;
		++itc;
	}
	
	MutantStack<int>	bis;
	
	std::cout << "\ntest empty : " << bis.empty() << std::endl;
	bis.push(42);
	std::cout << "test empty : " << bis.empty() << std::endl;

	std::cout << "\n---OPERATOR =---\n" << std::endl;
	std::cout << "mstack top =" << mstack.top() << std::endl;
	mstack = bis;
	std::cout << "mstack top =" << mstack.top() << std::endl;

	std::cout << "\n---LIST---\n" << std::endl;

	std::list<int>	mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);
	std::list<int>::iterator itl = mlist.begin();
	std::list<int>::iterator itel = mlist.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	
	return 0;
}

