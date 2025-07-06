/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:56:58 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 14:20:31 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat	d;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	
	std::cout << "\nmeta = " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "j = " << j->getType() << std::endl;
	j->makeSound(); //will output the cat sound!
	std::cout << "i = " << i->getType() << std::endl;
	i->makeSound();
	std::cout << "d = " << d.getType() << std::endl;
	d.makeSound();
	
	std::cout << std::endl;
	delete i;
	
	i = j;
	const Animal* k = new Cat(d);
	
	std::cout << "\nj = " << j->getType() << std::endl;
	std::cout << "i = " << i->getType() << std::endl;
	std::cout << "d = " << d.getType() << std::endl;
	std::cout << "k = " << k->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	d.makeSound();
	k->makeSound();

	std::cout << "\nwi = " << wi->getType() << std::endl;
	wi->makeSound(); //will output the cat sound!
	wmeta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete k;
	delete wmeta;
	delete wi;

	return (0);
}