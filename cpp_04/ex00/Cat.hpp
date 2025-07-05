/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:54:21 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 19:59:17 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Animal;

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat (const Cat& copy);
		~Cat();
		Cat& operator=(const Cat& new_cat);
		
		void	makeSound() const;
};

#endif