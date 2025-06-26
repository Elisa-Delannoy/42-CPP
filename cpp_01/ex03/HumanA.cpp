/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:00:15 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 10:17:03 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}