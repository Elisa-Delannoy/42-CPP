/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:52 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 10:14:31 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria(), _type("cure")
{
}


Cure::Cure(std::string const& type) : AMateria(type), _type(type)
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
	_type = copy._type;
}

Cure& Cure::operator=(const Cure& new_cure)
{
	if (this != &new_cure)
	{
		AMateria::operator=(new_cure);
		_type = new_cure._type;
	}
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria *clone =  new Cure(_type);
	return (clone);
}

void 	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *";
}