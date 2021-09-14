// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et 
// affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream> //Inclure la librairie des canales entrants et sortants
#include <time.h> // Inclure la librairie time.h qqui inclus des fonctioins standardis�e

using namespace std; // Inclure le namespace std, pour �viter de le r��crire � chq fois

int main() // Ouverture du main
{
   setlocale(LC_ALL, ""); // Permet de lire les caract�res sp�ciaux

   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   int nb; // Cr�er une variable pour le nombre que l'utilisateur vas choisir
   int compteur;

   // D�claration des constantes qui doivent �tre initialis�es � leur d�claration
   const int QUITTER = -1;
   const int MAX = 0;

   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random


   cout << "Ce programme donne 5 chances � l'utilisateur de trouver le nombre al�atoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

   cout << "!!Pour quitter en tout moment rentrer (-1) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl; // Dis � l'utilisateur comment quitter le programme

   cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes pr�sentement

   // Affiche � l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
   cout << "Je viens de choisir un nombre compris entre 0 et 100 inclusivement! \n" << endl;

   cout << "Deviner le nombre que j'ai en m�moire: ";

   cin >> nb; // Conserves la donn�e entr�e

   cout << endl; // Passe � la ligne

   compteur = 4;

   while (nb != QUITTER) // Tant que le nb  n'est pas �gale � -1 rentrer dans la boucle
   {
      while (nb >= 0 && nb <= 100)
      {

         while (nb != random && compteur > MAX && nb != QUITTER)
         {
            cout << "Oups! Ce n'est pas le chiffre que j'avais en t�te" << endl;

            cout << random << endl;

            system("pause");
            system("cls");
         
            cout << "Il te reste encore " << compteur << " chances" << endl;

            cout << "Deviner le nombre que j'ai en m�moire: ";

            cin >> nb; // Conserves la donn�e entr�e

            cout << endl; // Passe � la ligne

            compteur = compteur-1;

         }

         cout << "Il ne te reste aucune de chance! Tu n'as pas r�ussi � deviner" << endl;

         system("pause");
         system("cls");

         srand(time(0)); // pour activer l�al�atoire dans le programme
         random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random


         cout << "Ce programme donne 5 chances � l'utilisateur de trouver le nombre al�atoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl; // Dis � l'utilisateur comment quitter le programme

         cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes pr�sentement

         // Affiche � l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
         cout << "Je viens de choisir un nouveau nombre compris entre 0 et 100 inclusivement! \n" << endl;

         cout << "Deviner le nombre que j'ai en m�moire: ";

         cin >> nb; // Conserves la donn�e entr�e

         cout << endl; // Passe � la ligne

         compteur = 4;
      }

      cout << "Ton nombre n'est pas compris entre 0 et 100!" << endl;

      system("pause");
      system("cls");

      cout << "Ce programme donne 5 chances � l'utilisateur de trouver le nombre al�atoire entre 0 et 100. \n \n"; // Affiche ce que le programme vas faire

      cout << "!!Pour quitter en tout moment rentrer (-1) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl; // Dis � l'utilisateur comment quitter le programme

      cout << "\t \t -------------------------------Exercie Devinette------------------------------- \n"; // Affiche dans quel exercice nous sommes pr�sentement

      // Affiche � l'utilisateur qu'il vient de choisir un nombre entre 0 et 100
      cout << "Je viens de choisir un nouveau nombre compris entre 0 et 100 inclusivement! \n" << endl;

      cout << "Deviner le nombre que j'ai en m�moire: ";

      cin >> nb; // Conserves la donn�e entr�e

      cout << endl;
   }

   system("cls");

   cout << "Bonne journ�e! ;)" << endl; // Affiche un message de fin de programme lorsque l'utilisateur veut quitter

   system("pause");

   return 0; // Retourne 0

}

/*          Plan de test

   ventes                  salaire total

   5000$                    625$
   1000$                    325$
   -1$                      Bonne journ�e!
   -5000                    Erreur les ventes sont dans le n�gatifs et demande de rentrer une nouvelle valeur
   1000.5$                  325.038$
   a                        Le programme plante dans une boucle infini
*/