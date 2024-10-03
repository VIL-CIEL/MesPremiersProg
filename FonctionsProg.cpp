
#include <iostream>

int abonnement_tel() {
    char redo = 'O';
    float appelFA = 0.3, SMSFA = 0.1, appelFB = 0.2, SMSFB = 0.088, couttotalFA, couttotalFB, coutrelatif;
    int appelDuree, nmbrSMS;
    std::cout << "Bienvenue sur le calculateur de forfait telephonique de NightCall\n";
    std::cout << "Merci de nous donner la duree des appels fait par mois en minute : ";
    std::cin >> appelDuree;
    std::cout << "Merci de nous donner le nombre de SMS fait par mois : ";
    std::cin >> nmbrSMS;
    couttotalFA = appelDuree * appelFA + nmbrSMS * SMSFA + 2;
    couttotalFB = appelDuree * appelFB + nmbrSMS * SMSFB + 4;
    if (couttotalFA > couttotalFB) {
        coutrelatif = couttotalFA / couttotalFB;
    }
    else {
        coutrelatif = couttotalFB / couttotalFA;
    }

    std::cout << "Forfait A : " << couttotalFA << " euros\n";
    std::cout << "Forfait B : " << couttotalFB << " euros\n";
    std::cout << "Cout Relatif : " << coutrelatif << " euros\n";
    std::cout << "Merci d'avoir utilise notre service !\n" << std::endl;

    return 0;
}

int calcul_caisse() {
    int c1, c2, c5, c10, c20, c50, e1, e2;
    int nmbrE, nmbrC, totalE, totalC;

    std::cout << "Bienvenue dans le programme de somme des pieces !\n";
    std::cout << "Donnez moi le nombre de pieces de 1 centimes : ";
    std::cin >> c1;
    std::cout << "Donnez moi le nombre de pieces de 2 centimes : ";
    std::cin >> c2;
    std::cout << "Donnez moi le nombre de pieces de 5 centimes : ";
    std::cin >> c5;
    std::cout << "Donnez moi le nombre de pieces de 10 centimes : ";
    std::cin >> c10;
    std::cout << "Donnez moi le nombre de pieces de 20 centimes : ";
    std::cin >> c20;
    std::cout << "Donnez moi le nombre de pieces de 50 centimes : ";
    std::cin >> c50;
    std::cout << "Donnez moi le nombre de pieces de 1 euros : ";
    std::cin >> e1;
    std::cout << "Donnez moi le nombre de pieces de 2 euros : ";
    std::cin >> e2;

    nmbrE = e1 + e2 * 2;
    nmbrC = c1 + c2 * 2 + c5 * 5 + c10 * 10 + c20 * 20 + c50 * 50;
    totalE = nmbrE + nmbrC / 100;
    totalC = nmbrC % 100;

    std::cout << "Vous avez " << totalE << " euros et  " << totalC << " centimes";

    int bouclefini = 0, total = 0;
    c2 = 0;
    c5 = 0;
    c10 = 0;
    std::cout << "\n\nRendu de monnaie possible pour 1euro :";

    // boucle de 2 cent
    for (c2 = 50; c2 >= 0; c2--) {
        // boucle de 5 cent
        for (c5 = 20; c5 >= 0; c5--) {
            // boucle de 10 cent
            for (c10 = 10; c10 >= 0; c10--) {
                //std::cout << c10*10 + c5*5 + c2*2 << "\n";
                if (c10 * 10 + c5 * 5 + c2 * 2 == 100)
                    std::cout << "1 euro = " << c10 << "*10c + " << c5 << "*5c + " << c2 << "*2c\n";
            }
        }
    }

    return 0;
}

int recherche_ASCII() {
    /*
    * def une variable char
    * demande le char
    * cherche dans la table
    * affiche les codes
    */

    char c;
    std::cout << "Entrez un caractere : ";
    std::cin >> c;
    std::cout << "Le code ASCII de " << c << " est " << int(c) << ", le code hexadecimale est " << std::hex << int(c);
    return 0;

}

int table_ascii() {
    int i;
    for (i = 32; i <= 127; i++) {
        std::cout << std::dec << "Le code : " << i << std::hex << "(" << i << ")" << ", donne : " << static_cast<char>(i) << "\n";
    }
    return 0;
}

int taille_var() {

    std::cout << "La taille d'un char est : " << sizeof(char);
    std::cout << "\nLa taille du bool est : " << sizeof(bool);
    std::cout << "\nLa taille d'un int est : " << sizeof(int);
    std::cout << "\nLa taille d'un float est : " << sizeof(float);
    std::cout << "\nLa taille d'un doubles est : " << sizeof(double);

    return 0;
}

int jeu_devi() {
    int difficult;
    std::cout << "-------- LE JUSTE PRIX AVEC LAGAF --------\n";
    std::cout << "Choisissez la difficulte \n-> 1 - Simple(1-8)\n-> 2 - Normal(1-20)\n-> 3 - Difficile(1-100)";
    do { std::cout << "\nDifficulte Choisie : ";  std::cin >> difficult; } while ((difficult != 1) && (difficult != 2) && (difficult != 3));

    srand(time(NULL));
    int val = 0, user, compt = 0;

    if (difficult == 1)
        val = rand() % 8 + 1;
    else if (difficult == 2)
        val = rand() % 20 + 1;
    else
        val = rand() % 100 + 1;

    do {
        std::cout << "\nMerci d'entrer votre numero : ";
        compt += 1;
        std::cin >> user;
        if (user == val) {
            std::cout << "--------- VOUS AVEZ TROUVE LE NOMBRE GAGNANT ---------\n-Nombres de coups : " << compt;
            if (difficult == 1) {
                if (compt < 3)
                    std::cout << "\n-Vous etes en dessous du nombre de coups maximum theorique !\n";
                else
                    std::cout << "\n-Vous etes en dessous du nombre de coups maximum theorique !\n";
            }
            else if (difficult == 2) {
                if (compt < 5)
                    std::cout << "\n-Vous etes en dessous du nombre de coups maximum theorique !\n";
                else
                    std::cout << "\n-Vous etes en dessous du nombre de coups maximum theorique !\n";
            }
            else {
                if (compt < 7)
                    std::cout << "\n-Vous etes en dessous du nombre de coups maximum theorique !\n";
                else
                    std::cout << "\n-Vous etes en dessous du nombre de coups maximum theorique !\n";
            }
        }
        else if (user < val)
            std::cout << "C'est plus !";
        else
            std::cout << "C'est moins !";
    } while (user != val);
    return 0;
}