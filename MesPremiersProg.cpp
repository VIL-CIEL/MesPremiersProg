/*
* TPGitVS.cpp : Ce fichier contient la fonction 'main'.L'exécution du programme commence et se termine à cet endroit.
* 
* 
* Menu de différentes programmes
* 
*/

#include <iostream>
#include "FonctionsProg.h"



/*
Pseudo code :
initialise choix en int et initialise lock en int a 1
Message de bienvenue
Demande de programme avec choix
plusieurs if qui donne le programme en fonction de la variable choix
demande si on recommence le programme ou non avec lock
while avec lock
*/
int main(){
    int lock=0;
    do {
        system("cls");
        int choix;
        std::cout << "Bienvenue sur le Menu Git de Programmes Informatiques\nVoici les programmes disponibles :\n1-Abonnement-Telephone\n2-Calcul de centimes\n3-Recherche de code ASCII\n4-Table ASCII\n5-Taille d'une variable\n6-Jeux de devinette\n";

        do {
            std::cout << "Merci de rentrer le numéro correspondant au programme voulu : ";
            std::cin >> choix;
        } while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 5 && choix != 6);

        if (choix == 1) {
            std::cout << "Vous avez choisi : Abonnement-Telephone\n\n";
            abonnement_tel();
        }
        if (choix == 2) {
            std::cout << "Vous avez choisi : Calcul de centimes\n\n";
            calcul_caisse();
        }
        if (choix == 3) {
            std::cout << "Vous avez choisi : Recherche de code ASCII\n\n";
            recherche_ASCII();
        }
        if (choix == 4) {
            std::cout << "Vous avez choisi : Table ASCII\n\n";
            table_ascii();
        }
        if (choix == 5) {
            std::cout << "Vous avez choisi : Taille d'une variable\n\n";
            taille_var();
        }
        if (choix == 6) {
            std::cout << "Vous avez choisi : Jeux de devinette\n\n";
            jeu_devi();
        }
        std::cout << "\n\nVoulez vous recommencez le programme ? (1=oui/2=non) : ";
        std::cin >> lock;
    } while (lock);

    return 0;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
