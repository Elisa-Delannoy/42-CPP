/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/13 16:13:36 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	bur("bob", 1);
	Intern		someRandomIntern;
	AForm*		rrf;

	rrf = someRandomIntern.makeForm("invalid form", "Bender");
	
	if (rrf)
		bur.executeForm(*rrf);

	Intern	 someRandomIntern1;
	AForm* rrf1;
	rrf1 = someRandomIntern1.makeForm("shrubbery creation", "Bender");
	if (rrf)
	{
		bur.executeForm(*rrf1);
		bur.signForm(*rrf1);
		bur.executeForm(*rrf1);
	}

	Intern	 someRandomIntern2;
	AForm* rrf2;
	rrf2 = someRandomIntern2.makeForm("robotomy request", "Bender");
	if (rrf2)
	{
		bur.signForm(*rrf2);
		bur.executeForm(*rrf2);
	}

	Intern	 someRandomIntern3;
	AForm* rrf3;
	
	rrf3 = someRandomIntern2.makeForm("presidential pardon", "Bender");
	if (rrf3)
	{
		rrf3->beSigned(bur);
		bur.executeForm(*rrf3);
	}

	if (rrf)
		delete	rrf;
	if (rrf1)
		delete	rrf1;
	if (rrf2)
		delete	rrf2;
	if (rrf3)
		delete	rrf3;
	
	return (0);
}