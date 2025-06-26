/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:40:05 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 13:06:42 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
