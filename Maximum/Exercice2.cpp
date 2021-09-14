// But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et 
// affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream> //Inclure la librairie des canales entrants et sortants
#include <time.h> // Inclure la librairie time.h qqui inclus des fonctioins standardisée

using namespace std; // Inclure le namespace std, pour éviter de le réécrire à chq fois

int main() // Ouverture du main
{
   setlocale(LC_ALL, ""); // Permet de lire les caractères spéciaux

   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   int nb; // Créer une variable pour le nombre que l'utilisateur vas choisir
   int compteur;

   // Déclaration des constantes qui doivent être initialisées à leur déclaration
   const int QUITTER = -1;
   const int MAX = 0;

   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random


   cout << "Ce programme donne 5 chances à l'utilisateur de trouver le nombre aléatoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

   cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

   cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

   // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
   cout << "Je viens de choisir un nombre compris entre 0 et 100 inclusivement! \n" << endl;

   cout << "Deviner le nombre que j'ai en mémoire: ";

   cin >> nb; // Conserves la donnée entrée

   cout << endl; // Passe à la ligne

   compteur = 4;

   while (nb != QUITTER) // Tant que le nb  n'est pas égale à -1 rentrer dans la boucle
   {
      while (nb >= 0 && nb <= 100)
      {

         while (nb != random && compteur > MAX && nb != QUITTER)
         {
            cout << "Oups! Ce n'est pas le chiffre que j'avais en tête" << endl;

            cout << random << endl;

            system("pause");
            system("cls");
         
            cout << "Il te reste encore " << compteur << " chances" << endl;

            cout << "Deviner le nombre que j'ai en mémoire: ";

            cin >> nb; // Conserves la donnée entrée

            cout << endl; // Passe à la ligne

            compteur = compteur-1;

         }

         cout << "Il ne te reste aucune de chance! Tu n'as pas réussi à deviner" << endl;

         system("pause");
         system("cls");

         srand(time(0)); // pour activer l’aléatoire dans le programme
         random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random


         cout << "Ce programme donne 5 chances à l'utilisateur de trouver le nombre aléatoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

         cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

         // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
         cout << "Je viens de choisir un nouveau nombre compris entre 0 et 100 inclusivement! \n" << endl;

         cout << "Deviner le nombre que j'ai en mémoire: ";

         cin >> nb; // Conserves la donnée entrée

         cout << endl; // Passe à la ligne

         compteur = 4;
      }

      cout << "Ton nombre n'est pas compris entre 0 et 100!" << endl;

      system("pause");
      system("cls");

      cout << "Ce programme donne 5 chances à l'utilisateur de trouver le nombre aléatoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

      cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

      cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

      // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
      cout << "Je viens de choisir un nouveau nombre compris entre 0 et 100 inclusivement! \n" << endl;

      cout << "Deviner le nombre que j'ai en mémoire: ";

      cin >> nb; // Conserves la donnée entrée

      cout << endl;
   }

   system("cls");

   cout << "Bonne journée! ;)" << endl; // Affiche un message de fin de programme lorsque l'utilisateur veut quitter

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