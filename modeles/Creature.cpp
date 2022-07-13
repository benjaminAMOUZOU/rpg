//
// Created by benjamin on 02/07/22.
//

#include "Creature.h"

Creature::Creature() : nom(""), niveauSante(0) {}

Creature::Creature(string nom, int niveauSante) {
    this->nom = nom;
    this->niveauSante = niveauSante;
}

string Creature::getNom() {
    return this->nom;
}

void Creature::setNom(string nom) {
    this->nom = nom;
}

int Creature::getNiveauSante() {
    return this->niveauSante;
}

void Creature::setNiveauSante(int niveauSante) {
    this->niveauSante = niveauSante;
}

void Creature::print() {
    string ecran;
    ecran = "Creature[nom: " + this->nom + ", niveauSante:  " + to_string(this->niveauSante) + "]";
    cout << ecran << endl;
}