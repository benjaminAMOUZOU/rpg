//
// Created by benjamin on 06/07/22.
//

#include "Scene.h"
#include "../modeles/Druide.h"
#include "../modeles/Ouvrier.h"
#include "../modeles/Soldat.h"
#include "../modeles/Religieux.h"
#include <iostream>

using namespace std;

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"


Scene::Scene() {}

void Scene::titre() {
    cout << "****************************************" << endl;
    cout << "*" << GRN "   Role Playing Game " << NC "written in " RED << " C++ " NC << " * " << endl;
    cout << "****************************************" << endl << endl;
}

int Scene::choisirPersonnage() {
    int choix;
    cout << "1- Druide" << endl;
    cout << "2- Ouvrier" << endl;
    cout << "3- Guérier" << endl;
    cout << "4- Réligieux" << endl << endl;
    cout << "Veuillez choisir un personnage: ";
    cin >> choix;
    return choix;
}

string Scene::choisirNom() {
    string nom;
    cout << endl << "Veuillez nommez votre personnage: ";
    cin >> nom;
    return nom;
}


void Scene::creationDecor(int numero, string nom) {

    //Création du joueur
    switch (numero) {
        case 1:
            this->joueur = new Druide();
            break;
        case 2:
            this->joueur = new Ouvrier();
            break;
        case 3:
            this->joueur = new Soldat();
            break;
        default:
            this->joueur = new Religieux();
    }
    this->joueur->setNom(nom);
    this->joueur->setNiveauHabilite(50);
    this->joueur->setNiveauSante(5);

    //Affichage du joueur dans la console pour voir qu'il est convenablement crée
    this->joueur->print();

    //Création des personnages secondaires

    //Création d'une pièce devant les contenirs

    //Présenter la pièce au joueur et lui demandé avec lequel des personnages secondaires il souhaite commencé le combat

    //La logique du combat est à définir
}
