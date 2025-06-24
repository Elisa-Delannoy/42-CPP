/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:17:27 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/24 16:01:20 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << &brain << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << brain << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << std::endl;
}
