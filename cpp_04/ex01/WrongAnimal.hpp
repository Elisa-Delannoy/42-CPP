/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:59:01 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 20:02:29 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>


class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal (const WrongAnimal& copy);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& new_Wronganimal);
		
		void				makeSound() const;
		const std::string 	getType() const;
};

#endif