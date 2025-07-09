/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/09 15:20:33 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bur("bob", 1);
	Bureaucrat high("err", 0);
	Bureaucrat low("toto", 150);
	Bureaucrat test("error", 151);
	Bureaucrat te("qwerty", 75);

	std::cout << "\n" << bur << std::endl;
	bur.increment_b();
	bur.decrement_b();
	std::cout << bur << std::endl;
	bur.increment_b();
	std::cout << bur << "\n" << std::endl;
	
	low.decrement_b();
	low.increment_b();
	std::cout << low << "\n" << std::endl;
	
	te.increment_b();
	te.increment_b();
	te.increment_b();
	te.increment_b();
	std::cout << te << "\n" << std::endl;
	return (0);
}