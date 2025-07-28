/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:59:55 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/28 16:45:43 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span sp = Span(1000);
	std::vector<int>	tab;
	
	for (int i = 0; i < 1000; i++)
		tab.push_back(i);
	try
	{
		sp.addMultipleNumbers(tab);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;	
}
