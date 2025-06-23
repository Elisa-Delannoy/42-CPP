/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:03:22 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/23 14:40:59 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int	main()
{
	Zombie *zombie;
	
	zombie = newZombie("Foo");
	zombie->announce();
	randomChump("EL");
	randomChump("A");
	delete zombie;
	randomChump("b");
	return (0);
}