/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:12:29 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/29 18:27:21 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

int	main(int argc, char** argv)
{
	
	if (argc != 2)
		return (std::cerr << "Error: could not open file", 1);
		
	std::ifstream		file(argv[1], std::ios::in);
	std::ofstream		new_file("test", std::ios::out | std::ios::trunc);
	if (!file)
		return (std::cerr << "Error: could not open file" << std::endl, 1);


	std::string	line;
	while (std::getline(file, line))
	{
		new_file << line << std::endl;
	}
	file.close();
	new_file.close();
}