/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:26:12 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/03 11:28:08 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("default"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = copy.getName();
	this->_hit_point = copy.getHitPoint();
	this->_energy_point = copy.getEnergyPoint();
	this->_attack_damage = copy.getAttackDamage();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& new_clap)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_name = new_clap.getName();
	this->_hit_point = new_clap.getHitPoint();
	this->_energy_point = new_clap.getEnergyPoint();
	this->_attack_damage = new_clap.getAttackDamage();	
	return (*this);
}

void	ClapTrap::setHitPoint(const int hit_point)
{
	this->_hit_point = hit_point;
}

int		ClapTrap::getHitPoint() const
{
	return (this->_hit_point);
}

void	ClapTrap::setEnergyPoint(const int energy_point)
{
	this->_energy_point = energy_point;
}

int	ClapTrap::getEnergyPoint() const
{
	return (this->_energy_point);
}

void	ClapTrap::setAttackDamage(const int attack_damage)
{
	this->_attack_damage =  attack_damage;
}

int	ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

void	ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_point > 0 && this->_energy_point > 0)
	{
		this->_energy_point--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< " causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name <<  " can not attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_point -= amount;
	if (this->_hit_point < 0)
		this->_hit_point = 0;
	if (this->_hit_point > 0 && this->_energy_point > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has been attacked and lost " 
		<< amount << " hit points !" << std::endl;
	}
	else if (this->_hit_point == 0)
		std::cout << "ClapTrap " << this->_name <<  " is dead" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name <<  " has no longer energy" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point > 0 && this->_energy_point > 0)
	{
		this->_hit_point += amount;
		this->_energy_point--;
		std::cout << "ClapTrap " << this->_name << " repaired itself with " 
		<< amount << " energy points !" << std::endl;
	}
	else if (this->_hit_point == 0)
		std::cout << "ClapTrap " << this->_name <<  " is dead" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name <<  " has no longer energy" << std::endl;
}
