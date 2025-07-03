/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:27:30 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/03 14:26:44 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	check_hit(ClapTrap test)
{
	std::cout << "\n" << test.getName() << " : nb hit point " << test.getHitPoint()
		<< ", nb energy point " << test.getEnergyPoint()
		<< ", nb attack damage "<< test.getAttackDamage()<< "\n" << std::endl;
}

int	main()
{
	DiamondTrap	test1("DIAM");
	DiamondTrap	test2("te");


	test1.attack("enemy 1");
	check_hit(test1);
	test1.beRepaired(1);
	test1.attack("enemy 2");
	test1.takeDamage(2);
	test1.takeDamage(5);
	test1.beRepaired(3);
	test1.attack("enemy 2");
	check_hit(test1);
	test1.attack("enemy 3");
	check_hit(test1);
	test2.attack("frag enemy 1");
	test2.attack("frag enemy 2");
	test2.attack("frag enemy 3");
	test2.takeDamage(2);
	test2.takeDamage(5);
	check_hit(test2);
	test2.attack("frag enemy 4");
	test2.attack("frag enemy 5");
	test2.attack("frag enemy 6");
	test2.whoAmI();
	test1.whoAmI();
	
}
