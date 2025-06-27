/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:03:22 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/27 10:19:45 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main()
{
	Zombie *zombiehorde = zombieHorde(8, "foo");
	for (int i = 0; i < 8; i++)
	{
		zombiehorde[i].announce();
	}
	delete[] zombiehorde;
	return (0);
}