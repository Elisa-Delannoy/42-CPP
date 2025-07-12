/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:50:06 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 17:15:55 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) :  AForm(copy)
{
	this->_target = copy._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& new_presidentiapardonform)
{
	if (this != &new_presidentiapardonform)
		this->_target = new_presidentiapardonform._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	check_exec(executor);
	std::ofstream shrubbery((this->_target + "_shrubbery").c_str());
	if (!shrubbery)
	{
		std::cout << "Error creating file" << std::endl;
		return;
	}

	shrubbery << "       _-_       \n";
	shrubbery << "    /~~   ~~\\    \n";
	shrubbery << " /~~         ~~\\ \n";
	shrubbery << "{               }\n";
	shrubbery << " \\  _-     -_  / \n";
	shrubbery << "   ~  \\\\ //  ~   \n";
	shrubbery << "_- -   | | _- _  \n";
	shrubbery << "  _ -  | |   -_  \n";
	shrubbery << "      // \\\\      \n\n\n";

	shrubbery << "       _-_       \n";
	shrubbery << "    /~~   ~~\\    \n";
	shrubbery << " /~~         ~~\\ \n";
	shrubbery << "{               }\n";
	shrubbery << " \\  _-     -_  / \n";
	shrubbery << "   ~  \\\\ //  ~   \n";
	shrubbery << "_- -   | | _- _  \n";
	shrubbery << "  _ -  | |   -_  \n";
	shrubbery << "      // \\\\      \n";

	shrubbery.close();	
}