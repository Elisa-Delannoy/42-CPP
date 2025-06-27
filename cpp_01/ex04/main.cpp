/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:09:46 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/27 12:17:22 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


std::string	copy_replace(std::string line, std::string s1, std::string s2)
{
	std::string	new_string;
	std::size_t start = 0;
	std::size_t end;
	while ((end = line.find(s1, start)) != std::string::npos)
	{
		new_string += line.substr(start, end - start);
		new_string += s2;
		start = end + s1.length();
	}
	new_string += line.substr(start);
	return (new_string);
}

int	main(int argc, char **argv)
{	
	if (argc != 4)
		return (std::cout << "Error: please enter filename, s1 and s2" << std::endl, 1);
	
	std::ifstream		filename(argv[1], std::ios::in);
	if (!filename)
		return (std::cout << "Error: file can not be opended" << std::endl, 1);
	const std::string	f_replace = std::string(argv[1]) + ".replace";
	std::ofstream	new_file(f_replace.c_str(), std::ios::out | std::ios::trunc);
	if (!new_file)
		return (std::cout << "Error: file can not be opended" << std::endl, 1);
	std::string	line;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	while (std::getline(filename, line))
	{
		std::string	new_string = copy_replace(line, s1, s2);
		new_file << new_string << std::endl;
	}
	filename.close();
	new_file.close();
	return (0);
}
