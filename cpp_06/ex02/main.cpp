/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:40:44 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/15 17:10:19 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int	random_class = std::rand() % 3;

	if (random_class == 0)
		return (new A());
	else if (random_class == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;	
}

void	identify(Base& p)
{
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
	}
	catch(...)
	{
	}
	try
	{
		if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
	}
	catch(...)
	{
	}
	try
	{
		if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch(...)
	{
	}		
}

int	main()
{
	Base *test;
	Base *test1;
	Base *test2;

	std::srand(std::time(0));
	test = generate();
	test1 = generate();
	test2 = generate();

	std::cout << "test type\n";
	identify(*test);
	identify(test);
	std::cout << "\ntest1 type\n";
	identify(*test1);
	identify(test1);
	std::cout << "\ntest2 type\n";
	identify(*test2);
	identify(test2);

	delete test;
	delete test1;
	delete test2;
}

