/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:28 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 11:35:49 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "Character.hpp"
#include "AMateria.hpp"
#include <string>

class Ice : public AMateria
{
	private:
		std::string	_type;

	public:
		Ice();
		Ice(std::string const& type);
		~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& new_ice);
		
		void	use(ICharacter& target);
		AMateria*	clone() const;
};

#endif