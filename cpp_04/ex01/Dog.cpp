/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:47:47 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 20:34:39 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog (const Dog& copy) : Animal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	_type = copy._type;
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
		Animal::operator=(new_dog);
		_type = new_dog._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->_type << ": \"Wouaf\"" << std::endl;
}
