#include <iostream>
#include <string>
#include "interface.hpp"
using namespace std;


void affichermenu(){
    system("clear");
	cout << endl << endl << "\tAsobô" << endl << endl;
	cout << "Que voulez-vous faire ?\n\n";
	cout << " 1 - Epreuve 1\n 2 - Epreuve 2\n 3 - Epreuve 3\n 4 - Consuleter votre progression\n 0 - Quitter\n\nVotre choix ? ";
}

void afficherretour(){
    cout << endl << "\t 0 pour revenir en arrière ";
}

void affprogression(Joueur& j){
    int choix;
    system("clear");
    cout << endl << endl << "\tVotre progression :" << endl << endl;
    j.getcarac();

    afficherretour();
    do{
        cin >> choix;
    }while (choix != 0);
}

string affepreuve(Epreuve& e){

    int choix;
    string rep;
    system("clear");

    // si l'épreuve est débloquée, alors on l'affiche
    if (e.getautorisation() == 1){
        // affichage de l'épreuve
        cout << "\n\n\tBienvenue dans l'épreuve ";
        e.getepreuve();

        // affichage des choix possible à la suite
        cout << "\nSi vous souhaitez un indice : \n 1 - indice n°1\n 2 - indice n°2\n 3 - indice n°3";
        cout << "\n 4 pour entrer votre réponse" << endl << endl;

        afficherretour();
        cout << endl;
        do{
            do{
                cin >> choix;
            }while (choix<0 || choix>4);
            switch (choix){
                case 0:
                    break;
                case 1:
                    cout << e.getindice(1) << endl;
                    break;
                case 2:
                    cout << e.getindice(3) << endl;
                    break;
                case 3:
                    cout << e.getindice(3) << endl;
                    break;
                case 4:
                    cout << "\n\tQuelle est votre réponse ?" << endl;
                    getline(cin,rep);
                    e.checkrep(rep);
                    break;
                default:
                    cout << "choix invalide" << endl;
                    choix = 0;
                    break;
            }
        }while (choix != 0);

    } // sinn on affiche un message d'erreur
    else{
        cout << "\n\n\tcette épreuve n'est pas encore disponible" << endl << endl;
        afficherretour();
        do{
            cin >> choix;
        }while (choix != 0);
    }
    return rep;
}
