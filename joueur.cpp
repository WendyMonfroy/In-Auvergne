#include "joueur.hpp"

void Joueur::getcarac(){
    cout << "Nom joueur : " << nom << endl;
    cout << "Expérience acquise : " << xp << endl;
    cout << "Niveau actuel : " << level << endl;
}

void Joueur::incrxp(int xpgagne){
    int newlv;
    xp += xpgagne;
    cout << "Vous avez gagné " << xpgagne << "points d'expérience" << endl;

    newlv = (xp / 1000)+1;
    if (newlv>level){
        level = newlv;
        cout << "Félictation, vous avez gagné un niveau !\nVous êtes actuellement au niveau " << level << endl;
    }
}

Joueur::Joueur(){
    nom = "none";
    xp = 0;
    level = 0;

    cout << "Joueur créé sans type" << endl;
}

Joueur::Joueur(string n="no name"):
    nom(n), xp(0), level(1)
{
    cout << "Personnage de type créé avec nom" << endl;
}

Joueur::~Joueur(){
    cout << "Joueur détruit" << endl;
}

int Epreuve::getautorisation(){
    return etat;
}

string Epreuve::getindice(int n){
    string r;
    switch (n){
        case 1:
            r = indice1;
            break;
        case 2:
            r = indice2;
            break;
        case 3:
            r = indice3;
            break;
        default:
            r = "pas d'indice à afficher";
            break;
    }
    return r;
}

int Epreuve::checkrep(string rep){
    int r;
    if (rep == reponse){
        cout << "Bravo, vous accedez à l'étape suivante" << endl;
    }else{
        cout << "Ce n'est pas la bonne réponse, essayez de consulter encore une fois les éléments à votre dispostion" << endl;
    }
}

void Epreuve::getepreuve(){
    if (etat == 1){
        cout << nom << endl << endl;
        cout << speech << endl;
    }
}

Epreuve::Epreuve() {
    nom = "aucun";
    etat = 0;
    speech = "none";
    reponse = "none";
    indice1 = "none";
    indice2 = "none";
    indice3 = "none";
    xp = 300;
    cout << "epreuve crée sans initialisation" << endl;
}

Epreuve::Epreuve(string n="aucun", int e=0, string s="none", string r="none", string i1="none", string i2="none", string i3="none"):
    nom(n), etat(e), speech(s), reponse(r), indice1(i1), indice2(i2), indice3(i3), xp(300){
    cout << "on a créé une épreuve " << nom << endl;

}
