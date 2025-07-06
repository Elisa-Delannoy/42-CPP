/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:56:58 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 15:37:50 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	
	int	len = 8;
	Animal*	animal[len];
	for (int i = 0; i < len; i++)
	{
		if (i < len / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();			
	}
	for (int i = 0; i < len; i++)
	{
		Brain	test_brain = animal[i]->getBrain();
		std::cout << "\n" << animal[i]->getType() << ":  "
			<< test_brain.getFirstIdea() << std::endl;
		delete animal[i];
	}

	Cat 	test;
	Brain	cat_test("I have a brain");
	std::cout << "\ntest = " << test.getType() << ": "
		<< cat_test.getFirstIdea() << std::endl;
	Cat copy(test);
	std::cout << "\ncopy = " << copy.getType() << ": "
		<< cat_test.getFirstIdea() << std::endl;
	Cat op;

	op = copy;
	std::cout << "\nop = " << copy.getType() << ": "
		<< cat_test.getFirstIdea() << std::endl;
	
	return (0);
}