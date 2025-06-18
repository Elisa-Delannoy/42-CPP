/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno <edelanno@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:50:35 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/18 23:31:08 by edelanno         ###   ########.fr       */
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

initialisation d'instance : le constructeur est appele (initialiser les variables de la classe dans le constructeur)
this = un pointeur qui pointe sur l instance courante: this->variable = ... (initialiser la variable)
on peut aussi faire this->fonction() pour appeler la fonction dans la classe
on peut utiliser this dans nimporte quelle fonction


qd on sort de la foncton : le destructeur est appele 



attribut membre = une variable dans la classe, on peut l utiliser a partir d une instance

focntion membre = fonction qui apprtient  al alcasse, et qu on oeut utiliser depuis l instance de la classe
type de retour nomdelaclasse::identifiantfonction(paramatre)


attribut = variable dans la classe

intialiser les attributs  : liste d initialisation
sample2::sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3){
}

meilleure option que de faire ça :
this->a1 = p1
this->a2 =p2



const : permet de rendre une variable constante (essayer de travailler avec le plus de constante possible pour eviter les erreurs)
le seul moyen d initialiser une valeur a une constante c est  de l initialiser (pas d assignation)
initilaiser une constante  dans une classe grace la liste d initialisation

float const pi(f)
sample(float const f);

sample::sample(float const f) : pi(f)
ici j initilaise l attribut pi a la valeur f


void	bar(void)const 
qd on met const apres la parenthese dune fonction = cette fontion membre ne modifiera jamais l instane courante : on n aura jamais this-> attribut = valeur sinon ca ne compilera pas
(important et utile si on oublie qu on ne devait pas modifier)

CENTRAL EN C++ : SI ON ECRIT UNE FONCTION MEMBRE QUI NE MODIFEPAS L INSTANCE DE NOTRE CLASSE IL FAUT LA DECLARER ET LA DEFINIR EN CONST


public et private dans la classe permettent de controler l encapsulation des membres de notre classe : les attrbiut et les fonctions memebres qui seront visibles uniquelent a linterieur ou a lexteireur de la classe

public : visible depuis l interieur et l exterieur de la classe (essayer de mettre uniquement ce qui est utile a l utilisateur)
private : possile d y acceder uniquement depuis linterieur de la classe, invisible depuis lexterieur
convention uitliser _nom ou nom_ pour signaler si c est prive 
b

class vs struct
les struct et les classes fonctionnent de la même maniere, une difference :
il faut preciser public ou prive dans la classe, si on ne met rien par defaut c est prive 
structure par defaut c est public

on prend donc  l habitude de travailler en classe comme ca si on oublie de preciser par defaut ca sera prive


accesseur = connaitre la valeur de certains attribut privés ou la modifier 
fonction proxy de lecture et d ecriture getnomaccesseur (...) const et setnomaccesseur(...)

comparaison sur des structures
fonction compare : faire une comparaison structurelle entre deux instances
deux instances physiquement differente (adresse diff) mais structurellement identique (meme valeur)


variable et fonciton instance = membre (chaque attribut va etre different dans chaque instance)

variable et fonction de classe = non membre

attribut non membre
fontion non membre
non membre = qui existent au niveau de la classe et non de l instance
on utlise static pour ça
initialiser la static (le non membre) dans le cpp 

fonciton memebre : toujours un premier parametre une instance de notre classe pour utiliser le pointeur this / invisible quand on delcare une fonction instance
mais ce parametre n existe pas dans une fonction non membre (impossible de faire reference au pointeur this)
syntaxe pour faire reference a un nom membre d une classe = nomdelaclasse::attribut ou fonction (operateur de portée)
syntaxe pour faire reference a un membre : this a l interieur et linstance a lexterieur

pointeur sur membre et pointeur sur fonction membre

sample		instance
sample*  instancep = &instance
int	sample::*p=null = un pointeur sur un int qui est membre de ma classe sample
p = &sample::variable

instance.*p=21      .* permet de preciser sur quelle instance de linstannce (car dans l exemple il a appeler linstance instance)
insatncep->*p = 42   ->* quannd on a un pointeur d une instance

pointeur de fonction membre : 

void	(sample::*f))(void)const:
(instance.*f)()
(instancep->*f)()

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