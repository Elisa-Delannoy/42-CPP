/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:02:03 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 09:46:11 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat (const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	_type = copy._type;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& new_wrongcat)
{
	std::cout << "Assignment WrongCat called" << std::endl;
	WrongAnimal::operator=(new_wrongcat);
	_type = new_wrongcat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->_type << ": \"Miaou\"" << std::endl;
}