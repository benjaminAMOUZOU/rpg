//
// Created by benjamin on 02/07/22.
//

#include "Personnage.h"

Personnage::Personnage() : Creature() {
    this->niveauHabilite = 0;
    this->sac = new Sac();//Le sac ne contient pas d'outil
}

Personnage::Personnage(string nom, int niveauSante, int niveauHabilite) : Creature(nom, niveauSante) {
    this->niveauHabilite = niveauHabilite;
    this->sac = new Sac();//ici aussi
}

Personnage::Personnage(const Personnage &personnage) {
    this->nom = nom;
    this->niveauSante = niveauSante;
    this->niveauHabilite = niveauHabilite;

    //Copie du sac
    this->sac = new Sac();
    for (int i = 0; i < personnage.sac->getOutils().size(); i++) {

    }
    //Copie du contenu du sac, mais pour l'instant
    //Création d'un nouveau pointeur
    //Parcours et récupération des outils pointés, création de nouveau outils
    //Assignation des outils crés au sac
}

int Personnage::getNiveauHabilite() {
    return this->niveauHabilite;
}

void Personnage::setNiveauHabilite(int niveauHabilite) {
    this->niveauHabilite = niveauHabilite;
}

Personnage::~Personnage() {
    if (this->sac) {
        delete this->sac;
    }
}

Personnage &Personnage::operator=(Personnage &personnage) {
    return *this;
}

void Personnage::print() {
    string ecran;
    ecran = "Personnage[nom: " + this->nom + ", niveauSante:  " + to_string(this->niveauSante)
            + ", niveauHabilete:  " + to_string(this->niveauHabilite) + "]";

    //Il manque le contenu du sac
    cout << ecran << endl;
}



