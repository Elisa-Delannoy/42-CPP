/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:10:43 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/28 13:55:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	try
	{
		int	to_find = 8;
		easyfind(v, to_find);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		int	to_find2 = 4;
		easyfind(v, to_find2);
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() << '\n';
	}
	
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);

	try
	{
		int	to_find3 = 5;
		easyfind(l, to_find3);
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() << '\n';
	}
	
	try
	{
		int	to_find4 = 15;
		easyfind(l, to_find4);
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() << '\n';
	}
}