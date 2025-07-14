/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 08:07:53 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 14:10:05 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		_stock[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _stock[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& new_MateriaSource)
{
	if (this != &new_MateriaSource)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_stock[i])
				delete _stock[i];
			if (new_MateriaSource._stock[i])
				_stock[i] = new_MateriaSource._stock[i]->clone();
			else
				_stock[i] = 0;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* to_copy)
{
	if (!to_copy)
		return;
	int	i = 0;
	while(_stock[i] != 0)
		i++;
	if (i >= 4)
		std::cout << "Materia source is full, impossible to stock Materia" << std::endl;
	else
		_stock[i] = to_copy;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if(_stock[i] && _stock[i]->getType() == type)
			return (_stock[i]->clone());
	}
	std::cout << "No matching type" << std::endl;
	return (0);
}
