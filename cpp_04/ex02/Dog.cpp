/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:47:47 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 13:14:22 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog (const Dog& copy) : AAnimal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(const Dog& new_dog)
{
	std::cout << "Assignment Dog called" << std::endl;
	if (this != &new_dog)
	{
		AAnimal::operator=(new_dog);
		if (this->_brain)
		{
			delete this->_brain;
			this->_brain = new Brain(*new_dog._brain);
		}
		_type = new_dog._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->_type << ": \"Wouaf\"" << std::endl;
}

Brain	Dog::getBrain() const
{
	return (*this->_brain);
}
