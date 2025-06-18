/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:50:35 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/18 15:52:46 by edelanno         ###   ########.fr       */
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
			if (argv[i][j] != ' ' && i < argc  -1)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}


/*


namespace = std::

namespace Name {
mettre les variable globale ou fonction ex :
int		f(void) {return 4}
}

quand on appelle Name::f() ca donne 4

faire des alias de namespace : definir un namespace = a un autre namespace 



std::out << "you entered: [" << buff << "]" << std::endl; (avec buff un char*)



declarer la classe dans .hpp (pas oligatoire mais recommande)

NE PAS OUBLIER DE TERMINER LA DECLARATION D UNE CLASSE AVEC ;

class nom {
	nom de la classe (void) = constructeur
	~nom de la classe(void) = destructeur 
};

le constructeur et le destrcuteur n ont pas de type de retour

declarer une classe : type nom_instance 

classe = partie statique (code) -> moule a gateau 
instance = partie dynamique -> gateau

initialisation d'instance : le constructeur est appele 
qd on sort de la foncton : le destructeur est appele 



attribut membre = une variable dans la classe

focntion membre

*/








// int	main(int argc, char **argv)
// {
// 	int	i;
// 	size_t	j;
// 	std::string upper;

// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
// 	else
// 	{
// 		for (i = 1; i < argc; i++)
// 		{
// 			j = 0;
// 			std::string arg = argv[i];
// 			while(j < arg.length())
// 			{
// 				std::cout << static_cast<char>(std::toupper(arg[j]));
// 				j++;
// 			}
// 			if ((char)arg[j] != ' ' && i < argc  -1)
// 				std::cout << ' ';
// 		}
// 		std::cout << std::endl;
// 	}
// 	return (0);
// }