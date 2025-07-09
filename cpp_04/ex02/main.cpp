/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:56:58 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 16:22:08 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Cat	d;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << "\nj = " << j->getType() << std::endl;
	j->makeSound(); //will output the cat sound!
	std::cout << "i = " << i->getType() << std::endl;
	i->makeSound();
	std::cout << "d = " << d.getType() << std::endl;
	d.makeSound();
	
	std::cout << std::endl;
	delete i;
	
	i = j;
	const AAnimal* k = new Cat(d);
	
	std::cout << "\nj = " << j->getType() << std::endl;
	std::cout << "i = " << i->getType() << std::endl;
	std::cout << "d = " << d.getType() << std::endl;
	std::cout << "k = " << k->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	d.makeSound();
	k->makeSound();

	std::cout << "\nwi = " << wi->getType() << std::endl;
	wi->makeSound();
	wmeta->makeSound();
	std::cout << std::endl;

	delete j;
	delete k;
	delete wmeta;
	delete wi;
	return (0);
}