/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:43:17 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 19:57:37 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	select_level(std::string lv)
{
	int	level;
	
	level = -1;
	if (lv == "DEBUG")
		level = DEBUG;
	else if (lv == "INFO")
		level = INFO;
	else if (lv == "WARNING")
		level = WARNING;
	else if (lv == "ERROR")
		level = ERROR;
	return (level);
}

int	main(int argc, char **argv)
{
	Harl	test;

	if (argc != 2)
		return (std::cout << "You have to write level : \"DEBUG\" or \"INFO\" or \"WARNING\" or \"ERROR\"", 1);
	int	level = select_level(argv[1]);	
	switch (level)
	{
		case DEBUG:
			test.complain("DEBUG");
		case INFO:
			test.complain("INFO");
		case WARNING:
			test.complain("WARNING");
		case ERROR:
			test.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
	return (0);
}