/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/10 16:07:02 by edelanno         ###   ########.fr       */
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

	bur.executeAForm(rob);
	toto.executeAForm(rob);

	bur.executeAForm(tree);
	toto.executeAForm(tree);

	bur.executeAForm(*form);
	toto.executeAForm(*form);
	
	return (0);
}