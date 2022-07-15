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
    this->sac = new Sac();
}

Personnage::Personnage(const Personnage &personnage) {
    this->nom = nom;
    this->niveauSante = niveauSante;
    this->niveauHabilite = niveauHabilite;

    //Suppression d'éventuels outils dans le sac de la personne
    if (this->sac) {
        delete this->sac;
    }

    //Copie du sac
    this->sac = new Sac();
    this->sac = personnage.sac;//appel de la redéfinition de l'opérateur d'affectation dans sac
}

int Personnage::getNiveauHabilite() {
    return this->niveauHabilite;
}

void Personnage::setNiveauHabilite(int niveauHabilite) {
    this->niveauHabilite = niveauHabilite;
}

void Personnage::setSac(Sac *sac) {
    if (this->sac) {
        delete this->sac;
    }
    this->sac = sac;
}

Sac *Personnage::getSac() {
    return this->sac;
}

Personnage::~Personnage() {
    if (this->sac) {
        delete this->sac;
    }
}

Personnage &Personnage::operator=(const Personnage &personnage) {
    this->nom = nom;
    this->niveauSante = niveauSante;
    this->niveauHabilite = niveauHabilite;

    //Suppression d'éventuel outils dans le sac de la personne
    if (this->sac) {
        delete this->sac;//destructeur de sac appelé
    }

    //Copie du sac
    this->sac = new Sac();
    this->sac = personnage.sac;//redéfinition de l'opérateur d'affectation dans sac

    return *this;
}

void Personnage::print() {
    string ecran;
    ecran = "Personnage[nom: " + this->nom + ", niveauSante:  " + to_string(this->niveauSante)
            + ", niveauHabilete:  " + to_string(this->niveauHabilite) + ", ";
    cout << endl << ecran << "\t";
    this->sac->print();
    cout << "]" << endl;
}