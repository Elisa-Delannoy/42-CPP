/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:43:17 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/27 12:14:51 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	test;

	if (argc != 2)
		return (std::cout << "You have to write level : \"DEBUG\" or \"INFO\" or \"WARNING\" or \"ERROR\"" << std::endl, 1);
	test.complain(argv[1]);	
	return (0);
}