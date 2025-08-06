/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:07:36 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/06 13:37:17 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN	test;
	if (argc != 2)
		return (std::cout << "Error" <<std::endl, 0);
	if (test.ParseInput(argv[1]) == 0)
		return (0);
	test.DoRpn(argv[1]);
	return (1);
}
