/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:37:48 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 15:03:26 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	this->_realE = this->_energy_point;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	this->_realE = this->_energy_point;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
	this->_realE = this->_energy_point;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& new_ScavTrap)
{
	if (this != &new_ScavTrap)
	{
		ClapTrap::operator=(new_ScavTrap);
		this->_hit_point = new_ScavTrap._hit_point;
		this->_energy_point = new_ScavTrap._energy_point;
		this->_attack_damage = new_ScavTrap._attack_damage;
		this->_realE = this->_energy_point;
	}
	std::cout << "ScavTrap assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hit_point > 0 && this->_energy_point > 0)
	{
		this->_energy_point--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< " causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else if (this->_hit_point == 0)
		std::cout << "ScavTrap " << this->_name <<  " is dead" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name <<  " has no longer energy to attack" << std::endl;
}
