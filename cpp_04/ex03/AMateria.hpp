/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:12:42 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 17:42:48 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria
{
	protected:
		const std::string _type;
		
	public:
		AMateria(std::string const& type);

		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif