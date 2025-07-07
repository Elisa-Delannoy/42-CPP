/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:28 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 08:00:41 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "Character.hpp"
#include "AMateria.hpp"
#include <string>

class Ice
{
	private:
		std::string	_type;

	public:
		Ice();
		~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& new_ice);
		
		std::string	use(ICharacter&);
		AMateria* clone() const;
	
};

#endif