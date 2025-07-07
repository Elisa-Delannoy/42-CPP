/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:20:59 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 10:35:51 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
}

ICharacter::~ICharacter()
{
	delete _inventory;
}

ICharacter::ICharacter(const ICharacter& copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = copy._inventory[i]->clone();
}

ICharacter& ICharacter::operator=(const ICharacter& new_icharacter)
{
	if (this != &new_icharacter)
	{
		_name = new_icharacter._name;
		for (int i = 0; i < 4; i++)
			_inventory[i] = new_icharacter._inventory[i]->clone();
	}
		
	return (*this);
}

std::string const&	ICharacter::getName() const
{
	return (_name);
}

void	ICharacter::equip(AMateria* m)
{
	int	i = 0;
	while(_inventory[i] == 0)
		i++;
	if (i >= 4)
		std::cout << "Inventory is full, impossible to add Materia" << std::endl;
	else
		_inventory[i] = m;
}

void	ICharacter::unequip(int idx)
{
	if (_inventory[idx] == 0)
		std::cout << "This Materia does not exist, impossible de delete" << std::endl;
	else
		_inventory[idx] == 0;		
}

void	ICharacter::use(int idx, ICharacter& target)
{
	
}
