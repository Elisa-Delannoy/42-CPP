/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:01:56 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 19:59:22 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Animal;

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog (const Dog& copy);
		~Dog();
		Dog& operator=(const Dog& new_dog);
		
		void	makeSound() const;
};

#endif
