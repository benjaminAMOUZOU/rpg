//
// Created by benjamin on 02/07/22.
//

#include "Potion.h"

Potion::Potion() : Outil(), point(0) {}

Potion::Potion(string libelle, double point) : Outil(libelle), point(point) {}

double Potion::getPoint() {
    return this->point;
}

void Potion::setPoint(double point) {
    this->point = point;
}