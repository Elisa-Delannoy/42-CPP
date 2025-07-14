/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:20:59 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/14 14:06:15 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : ICharacter()
{
}

Character::Character(std::string name) : ICharacter()
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character& Character::operator=(const Character& new_character)
{
	if (this != &new_character)
	{
		_name = new_character._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (new_character._inventory[i])
				_inventory[i] = new_character._inventory[i]->clone();
			else
				_inventory[i] = 0;
		}
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;
	if (!m)
		return;
	while(_inventory[i] != 0)
		i++;
	if (i >= 4)
		std::cout << "Inventory is full, impossible to add Materia" << std::endl;
	else
		_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (_inventory[idx] == 0 || idx < 0 || idx >= 4)
		std::cout << "This Materia does not exist, impossible de delete" << std::endl;
	else
		_inventory[idx] = 0;		
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] == 0 || idx < 0 || idx >= 4)
		std::cout << "This Materia can not be used" << std::endl;
	else
		_inventory[idx]->use(target);
}
