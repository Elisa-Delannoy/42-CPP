/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 20:01:34 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/05 20:02:18 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongAnimal;

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat (const WrongCat& copy);
		~WrongCat();
		WrongCat& operator=(const WrongCat& new_Wrongcat);
		
		void	makeSound() const;
};

#endif