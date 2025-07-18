/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:54:24 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 09:40:46 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat (const Cat& copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_type = copy._type;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& new_cat)
{
	std::cout << "Assignment Cat called" << std::endl;
	if (this != &new_cat)
	{
		Animal::operator=(new_cat);
		_type = new_cat._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << ": \"Miaou\"" << std::endl;
}
