/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:43:13 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 19:23:16 by edelanno         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special"
				"-ketchup burger. I really do!" << std::endl;
}
void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon"
				"in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years,"
				"whereas you started working here just last month." << std::endl;
}
void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	f_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*function[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i = 0;

	while (i < 4)
	{
		if (level == f_level[i])
			return ((this->*function[i])());
		i++;	
	}
	std::cout << "error: level should be \"DEBUG\" or \"INFO\" or \"WARNING\" or \"ERROR\"" << std::endl;
}
