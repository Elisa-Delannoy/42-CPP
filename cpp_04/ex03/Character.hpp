/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:01 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 17:34:06 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
	public:
	virtual ~ICharacter() {}
	
	virtual std::string const&	getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				uneauip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};

#endif