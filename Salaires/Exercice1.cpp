// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et 
// affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.
// Auteur :	Issam Abdelkrim
// Date : 2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes qui doivent �tre initialis�es � leur d�claration
   const int salaireSemaine = 250;

   // D�clare mes variables, il y a des variables pr les infos fournies par l'utilisateur. C'est la responsabilit� de l'utilisateur de fournir cette info.
   double note;

   // Il y a les variables pour calculer le r�sultat. C'est la responsabilit� du programmeur d'initialiser(valeur de d�part) les variable de r�sultat
   double sommeNotes = 0; // Au d�part il n'y a aucune note de connnue, donc la moyenne est � z�ro



   cout << "Ce programme calcul la moyenne de notes des �l�ves. \n \n";

   cout << "!!Pour quitter en tout moment rentrer (9999) pour la premi�re valeur et n'importe quel valeur pour le deuxi�me nombre!!" << endl;

   cout << "\t \t -------------------------------Exercie Moyenne------------------------------- \n";

   // S'assurer que l'utilisateur a bien rentrer une lettre
   cout << "Rentrer la note de l'�l�ve: ";

   cin >> note;

   cout << endl;

   sommeNotes = sommeNotes + note;

   system("pause");
   system("cls");