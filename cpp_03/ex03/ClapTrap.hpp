/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:26:15 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/03 11:12:22 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hit_point;
		int			_energy_point;
		int			_attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();
		ClapTrap&		operator=(const ClapTrap& new_clap);
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
		void			setHitPoint(const int hit_point);
		int				getHitPoint(void) const;
		void			setEnergyPoint(const int energy_point);
		int				getEnergyPoint(void) const;
		void			setAttackDamage(const int attack_damage);
		int				getAttackDamage(void) const;
		void			setName(const std::string& name);
		std::string		getName(void) const;
};

#endif