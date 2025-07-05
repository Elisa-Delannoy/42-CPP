/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:04:00 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 20:05:15 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	_type = copy._type;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& new_animal)
{
	std::cout << "Assignment Animal called" << std::endl;
	_type = new_animal._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "default sound" << std::endl;
}

const std::string	Animal::getType() const
{
	return (this->_type);
}
