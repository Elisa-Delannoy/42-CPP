/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 08:07:53 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 08:07:54 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(const IMateriaSource& copy)
{
	(void) copy;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& new_imateriaSource)
{
	(void) new_imateriaSource;
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
}
