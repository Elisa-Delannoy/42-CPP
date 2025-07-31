/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:12:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/31 14:25:02 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

int	main(int argc, char** argv)
{
	(void) argv;
	if (argc != 2)
		return (std::cerr << "Error: could not open file" << std::endl, 1);
	
	BitcoinExchange	test;
	test.stock_data();
	// std::ifstream	file("data.csv", std::ios::in);

	std::ifstream	input(argv[1], std::ios::in);
	if (!input)
		return (std::cerr << "Error: could not open file" << std::endl, 1);
	std::string	line;
	std::getline(input, line);
	if (line != "date | value")
		return (std::cout << "Error: bad input => " << line << std::endl, 0);
	while (std::getline(input, line))
		test.check_input(line);
	input.close();
}