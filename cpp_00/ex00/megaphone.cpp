/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:50:35 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/20 15:33:14 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while(argv[i][j])
			{
				std::cout << (char)std::toupper(argv[i][j]);
				j++;
			}
			if ((argv[i][j - 1] != ' ' && i < argc  -1) && (argv[i + 1] && argv[i + 1][0] != ' '))
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}
