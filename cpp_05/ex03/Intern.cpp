/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:47:11 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 23:02:46 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& copy)
{
	(void) copy;
}

Intern& Intern::operator=(const Intern& new_intern)
{
	(void) new_intern;
	return (*this);
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	check[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	
	int i = 0;
	while (i < 3 && name.compare(check[i]))
		i++;

	switch(i)
	{
		case (0):
		{
			std::cout << "Intern creates " << check[i] << std::endl;
			return (new RobotomyRequestForm(target));
		}

		case (1):
		{
			std::cout << "Intern creates " << check[i] << std::endl;
			return (new PresidentialPardonForm(target));
		}

		case (2):
		{
			std::cout << "Intern creates " << check[i] << std::endl;
			return (new ShrubberyCreationForm(target));
		}
	}
	std::cerr << name << " does not exist" << std::endl;
	return (0);
}
