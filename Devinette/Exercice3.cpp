// But : D�veloppez un programme qui doit lire 10 nombres et qui d�termine et affiche la plus grande valeur. Le prog doit utiliser trois variables.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream> //Inclure la librairie des canales entrants et sortants

using namespace std; // Inclure le namespace std, pour �viter de le r��crire � chq fois

int main() // Ouverture du main
{
   setlocale(LC_ALL, ""); // Permet de lire les caract�res sp�ciaux

   // D�clare mes variables, il y a des variables pr les infos fournies par l'utilisateur. C'est la responsabilit� de l'utilisateur de fournir cette info.
   int nb;
   int max = 0; // Initialiser max � z�ro, ce n'est pas une valeur que l'utilisateur doit rentrer
   //int compteur;

   //Initialiser une constante max pour utiliser dans la boucle for, j'initialise le compteur � 1 donc le max � 11 pour pouvoir rentrer 10 fois dans la boucle
   const int MAX = 11;

   // Initilaliser compteur � 1 pour que se soit plus visuel � comprendre pour l'utilisateur (lui dire combien de nombre il � d�j� rentrer)
   for (int compteur = 1; compteur < MAX; compteur++) // Tant que compteur est plus petit que 11 exclusivement, incr�menter le compteur de 1 et continuer � rentrer dans le for.
   {
      cout << "Ce programme lit 10 nombres et affiche la plus grande valeur. \n \n"; // Affiche ce que le programme vas faire

      cout << "\t \t -------------------------------Exercie Maximum------------------------------- \n"; // Affiche dans quel exercice nous sommes pr�sentement

      cout << "(" << compteur << ")" << "Rentrer un nombre: "; // Demande � l'utilisateur de rentrer un nombre et lui affiche combien de nombre il a d�j� rentrer entre parenth�se

      cin >> nb; // Conserves la donn�e entr�e

      // Si nb est plus grand que max ou que max est �gal � z�ro alors rentrer dans la boucle et faire ce qui est inscrit
      if (nb >= max || max == 0) // (condition si max est == 0 rajouter, car sinon les chiffres n�gatif ne seront pas pris en compte puisque max sera toujours plus grand qu'un nombre n�gatif inscrit par l'utilisateur)
      {
         max = nb; // max prend la valeur de nb
      }

      system("pause"); // Faire une pause � l'�cran
      system("cls"); // Effacer ce qui se trouve sur l'�cran

   }

   cout << max << " est la plus grande valeur!" << endl; // Afficher � l'�cran la valeur de max qui est la plus grande valeur des 10 nombres rentrer par l'utilisateur 


   cout << "Bonne journ�e!" << endl; // Afficher bonne journ�e

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