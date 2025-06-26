/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:56:08 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 10:17:41 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string _name;
	Weapon& 	_weapon;

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack() const;
};

#endif