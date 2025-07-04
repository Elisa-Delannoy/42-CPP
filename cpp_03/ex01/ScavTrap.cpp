/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:37:48 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/04 17:53:40 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
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
	std::cout << "ScavTrap will attack " << target << ":" << std::endl;
	ClapTrap::attack(target);
}
