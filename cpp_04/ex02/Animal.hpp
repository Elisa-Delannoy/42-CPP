/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:58:53 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/06 16:13:53 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Dog;
class Cat;

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal (const AAnimal& copy);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& new_animal);
		
		virtual void		makeSound() const = 0;
		virtual Brain		getBrain() const;
		const std::string 	getType() const;
};

#endif