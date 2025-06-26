/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:18:31 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 13:00:31 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
	std::string	_name;
	Weapon*		_weapon;

	public:
	HumanB(std::string name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon& weapon);
};


#endif