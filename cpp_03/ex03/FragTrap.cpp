/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:37:34 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/03 14:22:47 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
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
		std::cout << "FragTrap copy constructor called"  << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& new_fragtrap)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &new_fragtrap)
		ClapTrap::operator=(new_fragtrap);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->_name  << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap : \"Please high fives !\"" << std::endl;
}
