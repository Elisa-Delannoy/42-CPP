// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ICharacter.cpp                                      :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/07/06 17:20:59 by edelanno          #+#    #+#             */
// /*   Updated: 2025/07/07 11:59:38 by edelanno         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

ICharacter::ICharacter()
{
}


ICharacter::~ICharacter()
{
}

ICharacter::ICharacter(const ICharacter& copy)
{
	(void) copy;
}

ICharacter& ICharacter::operator=(const ICharacter& new_icharacter)
{
	(void) new_icharacter;	
	return (*this);
}
