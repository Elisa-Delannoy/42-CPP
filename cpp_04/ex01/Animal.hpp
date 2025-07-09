/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:58:53 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 16:28:44 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal (const Animal& copy);
		virtual ~Animal();
		Animal& operator=(const Animal& new_animal);
		
		virtual void		makeSound() const;
		virtual Brain		getBrain()const;
		const std::string	getType() const;
};

#endif