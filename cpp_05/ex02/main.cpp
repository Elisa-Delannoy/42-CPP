/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 12:51:46 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat				bur("bob", 3);
		Bureaucrat				toto("toto", 70);
		PresidentialPardonForm	pres("president");
		RobotomyRequestForm		rob("robot");
		ShrubberyCreationForm	tree("tree");
		
		AForm* form = new PresidentialPardonForm("test aform");
		
		bur.executeForm(pres);
		toto.executeForm(pres);
		toto.signForm(pres);
		bur.signForm(pres);
		bur.executeForm(pres);
		toto.executeForm(pres);
		std::cout << std::endl;
		
		bur.executeForm(rob);
		toto.executeForm(rob);
		toto.signForm(rob);
		bur.signForm(rob);
		bur.executeForm(rob);
		std::cout << std::endl;
		
		bur.executeForm(tree);
		toto.executeForm(tree);
		toto.signForm(tree);
		bur.signForm(tree);
		bur.executeForm(tree);
		toto.executeForm(tree);
		std::cout << std::endl;
		
		bur.executeForm(*form);
		toto.executeForm(*form);
		toto.signForm(*form);
		bur.signForm(*form);
		bur.executeForm(*form);
		toto.executeForm(*form);
		std::cout << std::endl;
		
		delete form;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}