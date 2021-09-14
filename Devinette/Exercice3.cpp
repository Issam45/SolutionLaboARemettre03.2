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
   int max = 0;
   int compteur;

   // Déclaration des constantes qui doivent être initialisées à leur déclaration

   const int QUITTER = -1;


   cout << "Ce programme lit 10 nombres et affiche la plus grande valeur. \n \n"; // Affiche ce que le programme vas faire

   cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

   cout << "\t \t -------------------------------Exercie Maximum------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

   // Demande à l'utilisateur les ventes brutes cette semaine
   cout << "Rentrer un nombre: ";

   cin >> nb; // Conserves la donnée entrée

   cout << endl; // Passe à la ligne

   while (nb != QUITTER) // Tant que les ventes ne sont pas égale à -1 rentrer dans la boucle
   {
      compteur = 0;

      while (compteur < 9)
      {

         cout << "Ce programme lit 10 nombres et affiche la plus grande valeur. \n \n"; // Affiche ce que le programme vas faire

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

         cout << "\t \t -------------------------------Exercie Maximum------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

         // Demande à l'utilisateur les ventes brutes cette semaine
         cout << "Rentrer un nombre: ";

         cin >> nb; // Conserves la donnée entrée

         cout << endl; // Passe à la ligne

         compteur++;

         system("pause");
         system("cls");

         if (nb > max)
         {
            max = nb;
         }
      }

      
      cout << max << " est la plus grande valeur!" << endl;
      
      system("pause");
      system("cls");

      cout << "Ce programme lit 10 nombres et affiche la plus grande valeur. \n \n"; // Affiche ce que le programme vas faire

      cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

      cout << "\t \t -------------------------------Exercie Maximum------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

      // Demande à l'utilisateur les ventes brutes cette semaine
      cout << "Rentrer un nombre: ";

      cin >> nb; // Conserves la donnée entrée

      cout << endl; // Passe à la ligne

   }

   cout << "Bonne journée!" << endl;

   system("pause");

   return 0; // Retourne 0

}

/*          Plan de test

   ventes                  salaire total

   5000$                    625$
   1000$                    325$
   -1$                      Bonne journée!
   -5000                    Erreur les ventes sont dans le négatifs et demande de rentrer une nouvelle valeur
   1000.5$                  325.038$
   a                        Le programme plante dans une boucle infini
*/