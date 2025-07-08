/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:52 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/08 15:07:54 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}


Cure::Cure(std::string const& type) : AMateria(type)
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
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}