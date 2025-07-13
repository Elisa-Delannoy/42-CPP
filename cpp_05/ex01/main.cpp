/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/13 15:20:07 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	bur("bob", 1);
		Bureaucrat	toto("toto", 70);
		Form		forms("convention", 3, 55);
		Form		f("law", 30, 100);

		std::cout << forms << "\n" << std::endl;
		toto.signForm(forms);
		bur.signForm(forms);
		std::cout << forms << "\n" << std::endl;
		bur.signForm(forms);
		std::cout << forms << "\n" << std::endl;
		toto.signForm(f);
		bur.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
