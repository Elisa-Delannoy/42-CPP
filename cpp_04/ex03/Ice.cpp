/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:48:59 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/08 14:54:50 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const& type) : AMateria(type)
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
	_type = copy._type;
}

Ice& Ice::operator=(const Ice& new_Ice)
{
	if (this != &new_Ice)
	{
		AMateria::operator=(new_Ice);
		_type = new_Ice._type;
	}
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria *clone =  new Ice(_type);
	return (clone);
}

void 	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}
