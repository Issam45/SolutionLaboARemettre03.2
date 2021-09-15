// But : Développez un programme qui doit lire 10 nombres et qui détermine et affiche la plus grande valeur. Le prog doit utiliser trois variables.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream> //Inclure la librairie des canales entrants et sortants

using namespace std; // Inclure le namespace std, pour éviter de le réécrire à chq fois

int main() // Ouverture du main
{
   setlocale(LC_ALL, ""); // Permet de lire les caractères spéciaux

   // Déclare mes variables, il y a des variables pr les infos fournies par l'utilisateur. C'est la responsabilité de l'utilisateur de fournir cette info.
   int nb;
   int max = 0; // Initialiser max à zéro, ce n'est pas une valeur que l'utilisateur doit rentrer
   //int compteur;

   //Initialiser une constante max pour utiliser dans la boucle for, j'initialise le compteur à 1 donc le max à 11 pour pouvoir rentrer 10 fois dans la boucle
   const int MAX = 11;

   // Initilaliser compteur à 1 pour que se soit plus visuel à comprendre pour l'utilisateur (lui dire combien de nombre il à déjà rentrer)
   for (int compteur = 1; compteur < MAX; compteur++) // Tant que compteur est plus petit que 11 exclusivement, incrémenter le compteur de 1 et continuer à rentrer dans le for.
   {
      cout << "Ce programme lit 10 nombres et affiche la plus grande valeur. \n \n"; // Affiche ce que le programme vas faire

      cout << "\t \t -------------------------------Exercie Maximum------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

      cout << "(" << compteur << ")" << "Rentrer un nombre: "; // Demande à l'utilisateur de rentrer un nombre et lui affiche combien de nombre il a déjà rentrer entre parenthèse

      cin >> nb; // Conserves la donnée entrée

      // Si nb est plus grand que max ou que max est égal à zéro alors rentrer dans la boucle et faire ce qui est inscrit
      if (nb >= max || max == 0) // (condition si max est == 0 rajouter, car sinon les chiffres négatif ne seront pas pris en compte puisque max sera toujours plus grand qu'un nombre négatif inscrit par l'utilisateur)
      {
         max = nb; // max prend la valeur de nb
      }

      system("pause"); // Faire une pause à l'écran
      system("cls"); // Effacer ce qui se trouve sur l'écran

   }

   cout << max << " est la plus grande valeur!" << endl; // Afficher à l'écran la valeur de max qui est la plus grande valeur des 10 nombres rentrer par l'utilisateur 


   cout << "Bonne journée!" << endl; // Afficher bonne journée

   system("pause");

   return 0; // Retourne 0

}

/*          Plan de test

   nb1      nb2      nb3      nb4      nb5      nb6      nb7      nb8      nb9      nb10                  max

   1        2        3        4        5        6        7        8        9        10                    10

   10       9        8        7        6        5        4        3        2        1                     10

   -2       -3       -4       -5       -6       -7       -8       -9       -10       -11                  -2

   0        0        0        0        0        0        0        0        0        0                     0

   -1                                                                                                     Quitte le programme

   -10      -9       -8       -7       -6       -5       -4       -3       -2       -1                    -1



*/