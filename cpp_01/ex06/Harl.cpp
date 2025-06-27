/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:34:25 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/27 12:11:59 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special"
				"-ketchup burger.\nI really do!\n" << std::endl;
}
void	Harl::_info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon"
				"in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl;
}
void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years,"
				"whereas you started working here just last month.\n" << std::endl;
}
void	Harl::_error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable!\nI want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	f_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*function[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	int			i = 0;
	while (i < 4)
	{
		if (level == f_level[i])
			break;
		i++;
	}	
	switch (i)
	{
		case DEBUG:
			(this->*function[DEBUG])();
		case INFO:
			(this->*function[INFO])();
		case WARNING:
			(this->*function[WARNING])();
		case ERROR:
			(this->*function[ERROR])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}	
}

