/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:47:05 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/07 18:06:13 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc == 1)
		return (std::cerr << "Error" << std::endl, 0);
	
	PmergeMe	test;
	try
	{
		test.ParseInput(argc, argv);
		test.ExcecVector();
		test.ExcecDeque();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}