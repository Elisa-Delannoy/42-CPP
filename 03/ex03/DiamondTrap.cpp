/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:00:52 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/04 17:52:36 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->_energy_point = ScavTrap::_realE;
	this->_attack_damage = FragTrap::_realA;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hit_point = FragTrap::_realH;
	this->_energy_point = ScavTrap::_realE;
	this->_attack_damage = FragTrap::_realA;
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = copy.getName();
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& new_diamondtrap)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &new_diamondtrap)
	{
		this->_name = new_diamondtrap.getName();
		ClapTrap::operator=(new_diamondtrap);
	this->_hit_point = new_diamondtrap._hit_point;
	this->_energy_point = new_diamondtrap._energy_point;
	this->_attack_damage = new_diamondtrap._attack_damage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name : " <<  this->_name << "\n";
	std::cout << "ClapTrap name : " <<  ClapTrap::_name << std::endl;
}
