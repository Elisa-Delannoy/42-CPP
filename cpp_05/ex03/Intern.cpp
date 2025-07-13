/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:47:11 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/13 15:04:40 by edelanno         ###   ########.fr       */
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

AForm*	Intern::makeForm(const std::string& name, const std::string& target)
{
	std::string	check[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm*		(Intern::*form[3])(const std::string) = {&Intern::Robotomy, &Intern::Presidential, &Intern::Shrubbery};

	int i = 0;
	while (i < 3 && name.compare(check[i]))
		i++;
	if (i < 3)
	{
		std::cout << "Intern creates " << check[i] << std::endl;
		return ((this->*form[i])(target));
	}
	std::cerr << name << " does not exist" << std::endl;
	return (0);
}

AForm*	Intern::Shrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::Presidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::Robotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}
