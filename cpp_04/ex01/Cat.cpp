/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:54:24 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 13:12:31 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

class Animal;

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat (const Cat& copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(const Cat& new_cat)
{
	std::cout << "Assignment Cat called" << std::endl;
	if (this != &new_cat)
	{
		Animal::operator=(new_cat);
		if (this->_brain)
		{
			delete this->_brain;
			this->_brain = new Brain(*new_cat._brain);
		}
		_type = new_cat._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << ": \"Miaou\"" << std::endl;
}
