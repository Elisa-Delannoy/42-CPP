/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:54:24 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 16:12:20 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat (const Cat& copy)
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
		AAnimal::operator=(new_cat);
		_type = new_cat._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << ": \"Miaou\"" << std::endl;
}
