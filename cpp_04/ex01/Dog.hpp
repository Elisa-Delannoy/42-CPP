/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:01:56 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/07 09:47:44 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog();
		Dog (const Dog& copy);
		~Dog();
		Dog& operator=(const Dog& new_dog);
		
		void	makeSound() const;
		Brain	getBrain()const;
};

#endif
