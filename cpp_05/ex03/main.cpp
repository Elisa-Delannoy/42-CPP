/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/13 14:40:05 by edelanno         ###   ########.fr       */
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
	if (rrf != NULL)
	{
		try
		{
			rrf->execute(bur);
		}
		catch (const std::exception& e)
		{
			std::cerr << bur.getName() << " couldn't execute " << rrf->getName()
				<< " because " << e.what() << std::endl;
		}
	}

	Intern	 someRandomIntern1;
	AForm* rrf1;
	rrf1 = someRandomIntern1.makeForm("shrubbery creation", "Bender");
	if (rrf1 != NULL)
	{
		try
		{
			rrf1->execute(bur);
		}
		catch (const std::exception& e)
		{
			std::cerr << bur.getName() << " couldn't execute " << rrf1->getName()
				<< " because " << e.what() << std::endl;
		}
	}
	bur.signAForm(*rrf1);
	if (rrf1 != NULL)
	{
		try
		{
			rrf1->execute(bur);
		}
		catch (const std::exception& e)
		{
			std::cerr << bur.getName() << " couldn't execute " << rrf1->getName()
				<< " because " << e.what() << std::endl;
		}
	}

	// Intern	 someRandomIntern2;
	// AForm* rrf2;
	// rrf2 = someRandomIntern2.makeForm("robotomy request", "Bender");
	// bur.signAForm(*rrf2);
	// if (rrf2 != NULL)
	// {
	// 	try
	// 	{
	// 		rrf2->execute(bur);
	// 	}
	// 	catch (const std::exception& e)
	// 	{
	// 		std::cerr << bur.getName() << " couldn't execute " << rrf2->getName()
	// 			<< " because " << e.what() << std::endl;
	// 	}
	// }

	// Intern	 someRandomIntern3;
	// AForm* rrf3;
	
	// rrf3 = someRandomIntern2.makeForm("presidential pardon", "Bender");
	// rrf3->beSigned(bur);
	// if (rrf3 != NULL)	
	// {
	// 	try
	// 	{
	// 		rrf3->execute(bur);
	// 	}
	// 	catch (const std::exception& e)
	// 	{
	// 		std::cerr << bur.getName() << " couldn't execute " << rrf3->getName()
	// 			<< " because " << e.what() << std::endl;
	// 	}
	// }

	if (rrf)
		delete	rrf;
	if (rrf1)
		delete	rrf1;
	// if (rrf2)
	// 	delete	rrf2;
	// if (rrf3)
	// 	delete	rrf3;
	
	return (0);
}