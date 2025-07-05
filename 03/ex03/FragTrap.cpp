/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:37:34 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 15:08:01 by edelanno         ###   ########.fr       */
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
	this->_realH = this->_hit_point;
	this->_realA = this->_attack_damage;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	this->_hit_point = copy._hit_point;
	this->_energy_point = copy._energy_point;
	this->_attack_damage = copy._attack_damage;
	this->_realH = this->_hit_point;
	this->_realA = this->_attack_damage;
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
		this->_realH = new_fragtrap._realH;
		this->_realA = new_fragtrap._realA;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap : \"Please high fives !\"" << std::endl;
}
