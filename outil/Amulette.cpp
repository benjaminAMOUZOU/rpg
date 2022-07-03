//
// Created by benjamin on 02/07/22.
//

#include "Amulette.h"

Amulette::Amulette() : Outil(), portee(0), puissance(0) {}

Amulette::Amulette(string libelle, double portee, double puissance) : Outil(libelle), portee(portee),
                                                                      puissance(puissance) {}

double Amulette::getPortee() {
    return this->portee;
}

double Amulette::getPuissance() {
    return this->puissance;
}

void Amulette::setPortee(double portee) {
    this->portee = portee;
}

void Amulette::setPuissance(double puissance) {
    this->puissance = puissance;
}