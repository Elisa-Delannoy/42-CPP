/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:43:17 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/26 19:22:45 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	test;

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("INNFO");
	test.complain("WARNING");
	test.complain("ERROR");
	
	return (0);
}