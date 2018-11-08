#ifndef __JOUEUR__
#define __JOUEUR__

#include <iostream>
using namespace std;

class Joueur{
    protected:
        string nom;
        int xp;
        int level;
        string crac[10];

    public:
        void getcarac();
        void incrxp(int xpgagne);
        Joueur();
        Joueur(string n);
        ~Joueur();

};

class Epreuve{
    protected:
        string nom; // intitulé de l'etape
        int etat; // définit l'état débloqué (1) ou non (0) de l'épreuve
        int xp;
        string speech; // énoncé dee l'étape
        string reponse; //la reponse doit être connue
        string indice1; // liste d'indices
        string indice2;
        string indice3;

    public:
        int getautorisation();
        void getepreuve();
        string getindice(int n);
        int checkrep(string reponse);
        Epreuve();
        Epreuve(string n, int e, string s, string r, string i1, string i2, string i3);
        ~Epreuve();
};

#endif
