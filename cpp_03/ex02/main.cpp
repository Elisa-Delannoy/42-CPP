/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:27:30 by edelanno          #+#    #+#             */
/*   Updated: 2025/07/03 13:20:09 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"


void	check_hit(ClapTrap test)
{
	std::cout << "\n" << test.getName() << " : nb hit point " << test.getHitPoint()
		<< ", nb energy point " << test.getEnergyPoint()
		<< ", nb attack damage "<< test.getAttackDamage()<< "\n" << std::endl;
}

int	main()
{
	ClapTrap	test1("test alive");
	FragTrap	test2("frag");
	FragTrap	test3("frag bis");

	test1.attack("enemy 1");
	test1.beRepaired(1);
	test1.attack("enemy 2");
	check_hit(test1);

	test2.attack("frag enemy 1");
	check_hit(test2);
	test2.attack("frag enemy 2");
	test3.attack("bob");
	test2.attack("frag enemy 3");
	test2.takeDamage(2);
	test2.takeDamage(5);
	test3.takeDamage(95);;
	test2.beRepaired(3);
	test3.beRepaired(2);
	test3.takeDamage(13);
	test3.attack("bob");
	test3.beRepaired(13);
	check_hit(test3);
	test2.attack("frag enemy 4");
	test2.attack("frag enemy 5");
	test2.attack("frag enemy 6");
	test2.highFivesGuys();
}
