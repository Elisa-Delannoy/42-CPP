/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:02:03 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 20:02:13 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

class WrongAnimal;

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat (const WrongCat& copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	_type = copy._type;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& new_Wrongcat)
{
	std::cout << "Assignment WrongCat called" << std::endl;
	_type = new_Wrongcat._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->_type << ": \"Miaou\"" << std::endl;
}