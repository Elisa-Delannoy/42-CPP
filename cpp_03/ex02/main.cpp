/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:27:30 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/03 11:25:54 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"


void	check_hit(ClapTrap test)
{
	std::cout << test.getName() << " : nb hit point " << test.getHitPoint()
		 << ", nb energy point " << test.getEnergyPoint() << std::endl;
}

int	main()
{
	ClapTrap	test1("test alive");
	FragTrap	test2("frag");

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
	test2.beRepaired(3);
	check_hit(test2);
	test2.attack("frag enemy 4");
	test2.attack("frag enemy 5");
	test2.attack("frag enemy 6");
	test2.highFivesGuys();
	
}

// int	main()
// {
// 	ClapTrap	test1("test alive");
// 	ClapTrap	test2("test dead");

// 	test1.attack("enemy 1");
// 	check_hit(test1);
// 	test1.beRepaired(10);
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.takeDamage(2);
// 	check_hit(test1);
// 	test1.takeDamage(5);
// 	check_hit(test1);
// 	test1.beRepaired(3);
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.attack("enemy 2");
// 	check_hit(test1);
// 	test1.beRepaired(6);
// 	check_hit(test1);
	
// 	test2.attack("new enemy");
// 	check_hit(test2);
// 	test2.takeDamage(2);
// 	check_hit(test2);
// 	test2.takeDamage(15);
// 	check_hit(test2);
// 	test2.takeDamage(3);
// 	check_hit(test2);
// 	test2.attack("new enemy");
// 	check_hit(test2);
// 	test2.attack("new enemy");
// 	check_hit(test2);
// 	test2.attack("new enemy");
// 	test2.takeDamage(6);
// 	test2.beRepaired(6);
// 	check_hit(test2);
	
	

// }

