/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/10 18:44:38 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat				bur("bob", 1);
	Bureaucrat				toto("toto", 70);
	PresidentialPardonForm	pres("president");
	RobotomyRequestForm		rob("robot");
	ShrubberyCreationForm	tree("tree");
	
	AForm* form = new PresidentialPardonForm("test aform");

	bur.executeAForm(pres);
	toto.executeAForm(pres);
	toto.signAForm(pres);
	bur.signAForm(pres);
	bur.executeAForm(pres);
	toto.executeAForm(pres);
	std::cout << std::endl;

	bur.executeAForm(rob);
	toto.executeAForm(rob);
	toto.signAForm(rob);
	bur.signAForm(rob);
	bur.executeAForm(rob);
	bur.executeAForm(rob);
	bur.executeAForm(rob);
	bur.executeAForm(rob);
	toto.executeAForm(rob);
	std::cout << std::endl;

	bur.executeAForm(tree);
	toto.executeAForm(tree);
	toto.signAForm(tree);
	bur.signAForm(tree);
	bur.executeAForm(tree);
	toto.executeAForm(tree);
	std::cout << std::endl;

	bur.executeAForm(*form);
	toto.executeAForm(*form);
	toto.signAForm(*form);
	bur.signAForm(*form);
	bur.executeAForm(*form);
	toto.executeAForm(*form);
	std::cout << std::endl;

	delete form;
	return (0);
}