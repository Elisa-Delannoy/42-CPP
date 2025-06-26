/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:40:17 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 13:06:46 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
	std::string	_type;

	public:
	Weapon(std::string type);
	~Weapon();
	const std::string& getType()const;
	void setType(std::string new_type);
};

#endif
