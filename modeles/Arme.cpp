//
// Created by benjamin on 02/07/22.
//

#include "Arme.h"
Arme::Arme() : Outil(), point(0), niveau(0) {}

Arme::Arme(string libelle, double point, double niveau) : Outil(libelle), point(point),
                                                                      niveau(niveau) {}

double Arme::getPoint() {
    return this->point;
}

double Arme::getNiveau() {
    return this->niveau;
}

void Arme::setPoint(double point) {
    this->point = point;
}

void Arme::setNiveau(double niveau) {
    this->niveau = niveau;
}