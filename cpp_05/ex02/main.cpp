/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/12 22:56:05 by edelanno         ###   ########.fr       */
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
		toto.signAForm(pres);
		bur.signAForm(pres);
		bur.executeForm(pres);
		toto.executeForm(pres);
		std::cout << std::endl;
		
		bur.executeForm(rob);
		toto.executeForm(rob);
		toto.signAForm(rob);
		bur.signAForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		bur.executeForm(rob);
		toto.executeForm(rob);
		std::cout << std::endl;
		
		bur.executeForm(tree);
		toto.executeForm(tree);
		toto.signAForm(tree);
		bur.signAForm(tree);
		bur.executeForm(tree);
		toto.executeForm(tree);
		std::cout << std::endl;
		
		bur.executeForm(*form);
		toto.executeForm(*form);
		toto.signAForm(*form);
		bur.signAForm(*form);
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