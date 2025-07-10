/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/10 21:23:33 by edelanno         ###   ########.fr       */
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
	Intern	 	someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Intern	 someRandomIntern1;
	AForm* rrf1;
	rrf1 = someRandomIntern1.makeForm("ShrubberyCreationForm", "Bender");
	rrf1->execute(bur);


	Intern	 someRandomIntern2;
	AForm* rrf2;
	rrf2 = someRandomIntern2.makeForm("RobotomyRequestForm", "Bender");
	rrf2->execute(bur);

	Intern	 someRandomIntern3;
	AForm* rrf3;
	rrf3 = someRandomIntern2.makeForm("PresidentialPardonForm", "Bender");
	rrf3->execute(bur);
	
	return (0);
}