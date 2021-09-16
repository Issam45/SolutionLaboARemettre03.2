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
   int compteur; // variable du compteur
   int essai;

   // Déclaration des constantes qui doivent être initialisées à leur déclaration
   //const int QUITTER = -1;
   const int NB_CHANCES = 0;
   const int MIN = 0;
   const int MAX = 100;

   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % (MAX - MIN +1) + MIN; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random


   cout << "Ce programme donne 5 chances à l'utilisateur de trouver le nombre aléatoire entre " << MIN << " et " << MAX << "inclusivement. \n \n"; // Affiche ce que le programme vas faire

   cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

   cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

   // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
   cout << "Je viens de choisir un nombre compris entre " << MIN << " et " << MAX <<  " inclusivement!\n" << random << endl; // Afficher random le nombre choisi pour testerl;

   cout << "Deviner le nombre que j'ai en mémoire: ";

   cin >> nb; // Conserves la donnée entrée

   cout << endl; // Passe à la ligne

   compteur = 4;

   essai = 5 - compteur; // Calcul du nb d'essaie
  

      while (nb < MIN || nb > MAX) // Si nb n'est pas compris entre 0 et 100 rentrer
      {
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

      while (nb != random && compteur > NB_CHANCES) // Tant que nb n'est pas le random choisi par l'ordi et et que le compteur n'a pas atteint la limite rentrer
      {

         essai = 5 - compteur; // Calcul du nb d'essaie

         cout << "Oups! Ce n'est pas le chiffre que j'avais en tête" << endl;

         system("pause");
         system("cls");

         cout << "Il te reste encore " << compteur << " chances" << endl; // Afficher le nombre de chance restant

         // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
         cout << "J'ai choisi un nombre compris entre " << MIN << " et " << MAX << " inclusivement!\n" << random << endl; // Afficher random le nombre choisi pour testerl;

         cout << "Deviner le nombre que j'ai en mémoire: ";

         cin >> nb; // Conserves la donnée entrée

         cout << endl; // Passe à la ligne


         while (nb < MIN || nb > MAX) // Si nb n'est pas compris entre 0 et 100 inclusivement ne pas rentrer
         {
            cout << "Ton nombre n'est pas compris entre 0 et 100!" << endl;

            system("pause");
            system("cls");

            cout << "Il te reste encore " << compteur << " chances" << endl; // Afficher le nombre de chance restant

            // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
            cout << "J'ai choisi un nombre compris entre " << MIN << " et " << MAX << " inclusivement!\n" << random << endl; // Afficher random le nombre choisi pour testerl;

            cout << "Deviner le nombre que j'ai en mémoire: ";

            cin >> nb; // Conserves la donnée entrée

            cout << endl;
         }

         compteur = compteur - 1; // Baisser le compteur de 1
      }

      if (nb == random)
      {

         cout << "Bravo vous avez trouver le nombre que j'ai choisi!!! Tu as réussi à le trouver en " << essai << " essai(s)"  << endl; // Félicite et dis en combien d'essai l'utilisateur à trouver le nombre

         system("pause");
         system("cls");

         //srand(time(0)); // pour activer l’aléatoire dans le programme
         //random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random


         /*cout << "Ce programme donne 5 chances à l'utilisateur de trouver le nombre aléatoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

         cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

         // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
         cout << "Je viens de choisir un nouveau nombre compris entre 0 et 100 inclusivement! \n" << endl;

         cout << "Deviner le nombre que j'ai en mémoire: ";

         cin >> nb; // Conserves la donnée entrée

         cout << endl; // Passe à la ligne

         compteur = 4;*/

      }

      else
      {

         cout << "Il ne te reste aucune chance! Dommage le nombre était " << random << endl;

         system("pause");
         system("cls");

         //srand(time(0)); // pour activer l’aléatoire dans le programme
         //random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random


         /*cout << "Ce programme donne 5 chances à l'utilisateur de trouver le nombre aléatoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

         cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

         // Affiche à l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
         cout << "Je viens de choisir un nouveau nombre compris entre 0 et 100 inclusivement! \n" << endl;

         cout << "Deviner le nombre que j'ai en mémoire: ";

         cin >> nb; // Conserves la donnée entrée

         cout << endl; // Passe à la ligne

         compteur = 4;*/

      }
      

   system("cls");

   cout << "Bonne journée! À la prochaine ;)" << endl; // Affiche un message de fin de programme lorsque l'utilisateur veut quitter

   system("pause");

   return 0; // Retourne 0 (le programme s'éxecute sans erreur d'éxécution / obligatoire quand le main est un int)

}

/*          Plan de test

   nb                  affichage


   a                        Le programme plante dans une boucle infini
*/