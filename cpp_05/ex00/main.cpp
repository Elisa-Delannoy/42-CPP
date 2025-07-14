/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 11:52:47 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur("bob", 1);
		
		std::cout << "\n" << bur << std::endl;
		bur.decrement_b();
		std::cout << "\n" << bur << std::endl;
		bur.increment_b();
		std::cout << bur << "\n" << std::endl;
		bur.increment_b();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat high("err", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat test("error", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat low("toto", 150);

		low.increment_b();
		std::cout << low << "\n" << std::endl;
		low.decrement_b();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	try
	{
		Bureaucrat te("qwerty", 75);

		te.increment_b();
		te.increment_b();
		te.increment_b();
		te.increment_b();
		std::cout << te << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}