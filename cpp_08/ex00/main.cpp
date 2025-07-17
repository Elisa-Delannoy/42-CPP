/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:10:43 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/17 15:22:56 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
	
	int	to_find = 8;
	std::vector<int>::const_iterator it = easyfind(v, to_find);
	if (it != v.end())
	{
		std::cout << *it << " is found" << std::endl;
	} else
	{
		std::cout << to_find << " is not found" << std::endl;
	}
	
	int	to_find2 = 4;
	std::vector<int>::const_iterator it2 = easyfind(v, to_find2);
	if (it2 != v.end())
	{
		std::cout << *it2 << " is found" << std::endl;
	} else
	{
		std::cout << to_find2 << " is not found" << std::endl;
	}
}