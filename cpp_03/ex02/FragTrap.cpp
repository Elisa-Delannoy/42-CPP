/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:37:34 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 15:02:05 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap name constructor called for " << this->_name  << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
	std::cout << "FragTrap copy constructor called"  << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& new_fragtrap)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &new_fragtrap)
	{
		ClapTrap::operator=(new_fragtrap);
		this->_hit_point = new_fragtrap._hit_point;
		this->_energy_point = new_fragtrap._energy_point;
		this->_attack_damage = new_fragtrap._attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->_name  << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap : \"Hey, high fives !\"" << std::endl;
}
