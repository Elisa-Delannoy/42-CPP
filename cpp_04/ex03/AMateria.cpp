/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:39 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/08 14:25:05 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria& copy)
{
	_type = copy._type;
}

AMateria& AMateria::operator=(const AMateria& new_amateria)
{
	if (this != &new_amateria)
		_type = new_amateria._type;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (_type);
}

void 	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << "..." << std::endl;
}
