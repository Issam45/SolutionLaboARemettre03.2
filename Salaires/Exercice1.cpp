// But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et 
// affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes qui doivent être initialisées à leur déclaration
   const int salaireSemaine = 250;

   // Déclare mes variables, il y a des variables pr les infos fournies par l'utilisateur. C'est la responsabilité de l'utilisateur de fournir cette info.
   double note;

   // Il y a les variables pour calculer le résultat. C'est la responsabilité du programmeur d'initialiser(valeur de départ) les variable de résultat
   double sommeNotes = 0; // Au départ il n'y a aucune note de connnue, donc la moyenne est à zéro



   cout << "Ce programme calcul la moyenne de notes des élèves. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour la première valeur et n'importe quel valeur pour le deuxième nombre!!" << endl;

   cout << "\t \t -------------------------------Exercie Moyenne------------------------------- \n";

   // S'assurer que l'utilisateur a bien rentrer une lettre
   cout << "Rentrer la note de l'élève: ";

   cin >> note;

   cout << endl;

   sommeNotes = sommeNotes + note;

   system("pause");
   system("cls");