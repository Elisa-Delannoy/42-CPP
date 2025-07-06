/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:04:00 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 15:59:51 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("default")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	_type = copy._type;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& new_Aanimal)
{
	std::cout << "Assignment AAnimal called" << std::endl;
	if (this != &new_Aanimal)
		_type = new_Aanimal._type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "... no sound" << std::endl;
}

Brain		AAnimal::getBrain() const
{
	return (Brain());
}

const std::string	AAnimal::getType() const
{
	return (this->_type);
}
