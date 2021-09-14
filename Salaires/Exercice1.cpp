// But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et 
// affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream> //Inclure la librairie des canales entrants et sortants

using namespace std; // Inclure le namespace std, pour éviter de le réécrire à chq fois

int main() // Ouverture du main
{
   setlocale(LC_ALL, ""); // Permet de lire les caractères spéciaux

   // Déclaration des constantes qui doivent être initialisées à leur déclaration
   const int salaireSemaine = 250;

   const double pourcent = 7.5;

   const int QUITTER = -1;

   // Déclare mes variables, il y a des variables pr les infos fournies par l'utilisateur. C'est la responsabilité de l'utilisateur de fournir cette info.
   double ventesBrutes;

   double salaireTotal;



   cout << "Ce programme calcul le salaire des employés. \n \n"; // Affiche ce que le programme vas faire

   cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl; // Dis à l'utilisateur comment quitter le programme

   cout << "\t \t -------------------------------Exercie Salaires------------------------------- \n"; // Affiche dans quel exercice nous sommes présentement

   // Demande à l'utilisateur les ventes brutes cette semaine
   cout << "Combien sont vos ventes brutes cette semaine: ";

   cin >> ventesBrutes; // Conserves la donnée entrée

   cout << endl; // Passe à la ligne

   while (ventesBrutes != QUITTER) // Tant que les ventes ne sont pas égale à -1 rentrer
   {
      while (ventesBrutes >= 0) // Tant que les ventes brutes sont dans le positif faire le calcul
      {

         salaireTotal = salaireSemaine + (ventesBrutes * pourcent/100); // Calcules du salaire total tel que montrer dans l'énoncé

         //cout.precision(2);

         cout << "Votre salaire cette semaine est de " << salaireTotal << "$" << endl;

         system("pause"); // Faire une pause
         system("cls"); // Effacer ce qui se trouves à l'écran

         cout << "Ce programme calcul le salaire des employés. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Moyenne------------------------------- \n";

         // S'assurer que l'utilisateur a bien rentrer une lettre
         cout << "Combien avez-vous vendu cette semaine: ";

         cin >> ventesBrutes;

         cout << endl;

      }

         cout << "Erreur vos ventes brutes sont dans le négatifs!" << endl; // Afficher un message d'erreur, si les ventes brutes sont dans le négatif

         system("pause");
         system("cls");

         cout << "Ce programme calcul le salaire des employés. \n \n";

         cout << "!!Pour quitter en tout moment rentrer (-1) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

         cout << "\t \t -------------------------------Exercie Moyenne------------------------------- \n";

         // S'assurer que l'utilisateur a bien rentrer une lettre
         cout << "Combien avez-vous vendu cette semaine: ";

         cin >> ventesBrutes;

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