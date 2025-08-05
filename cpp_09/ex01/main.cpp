/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:07:36 by edelanno          #+#    #+#             */
/*   Updated: 2025/08/05 16:37:47 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN	test;
	if (argc != 2)
		return (std::cout << "Error" <<std::endl, 0);
	if (test.parse_input(argv[1]) == 0)
		return (0);
	test.do_rpn(argv[1]);
	return (1);
}
