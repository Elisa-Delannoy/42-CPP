/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:33:14 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/09 17:33:36 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	bur("bob", 1);
	Form		forms("convention", 5);

	std::cout << "\n" << bur << std::endl;
	bur.increment_b();
	bur.decrement_b();
	std::cout << bur << std::endl;
	bur.increment_b();
	std::cout << bur << "\n" << std::endl;

	std::cout << forms << "\n" << std::endl;
	forms.beSigned(bur);
	std::cout << forms << "\n" << std::endl;

	
	return (0);
}