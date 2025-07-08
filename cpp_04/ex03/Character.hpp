/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:01 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/08 14:45:56 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria*	_inventory[4];
		
	public:
		Character();
		Character(std::string name);
		Character(const Character& copy);
		Character& operator=(const Character& new_character);
		virtual ~Character();
		
		virtual std::string const&	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif