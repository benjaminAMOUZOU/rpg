//
// Created by benjamin on 02/07/22.
//

#include "Sac.h"

//Constructeur par défaut
Sac::Sac() {}

//Constructeur avec parametre
Sac::Sac(vector<Outil *> outils) {
    this->outils = outils;
}

//Constructeur de copie
Sac::Sac(const Sac &sac) {
    //Cf operator=
}

void Sac::addOutil(Outil *outil) {
    this->outils.push_back(outil);
}

vector<Outil *> Sac::getOutils() {
    return this->getOutils();
}

void Sac::setOutils(vector<Outil *> outils) {
    this->outils = outils;
}

void Sac::operator=(const Sac &sac) {
    //Parcour de la liste des outils et création
    //de nouveau pointeur et copie des valeurs de
}

Sac::~Sac() {
    for (int i = 0; i < this->outils.size(); i++) {
        if (outils[i]) {
            delete outils[i];
        }
    }
}
