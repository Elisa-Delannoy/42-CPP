/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:56:58 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 21:17:16 by edelanno         ###   ########.fr       */
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
	Animal*	animal[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();			
	}

	for (int i = 0; i < 100; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
		delete animal[i];
	}
	
	

	return (0);
}