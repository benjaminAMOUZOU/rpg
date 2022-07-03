//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_POTION_H
#define RPG_POTION_H

#include "Outil.h"

using namespace std;

class Potion : public Outil {

private:
    double point;

public:
    Potion();

    Potion(string libelle, double point);

    double getPoint();

    void setPoint(double point);

};


#endif //RPG_POTION_H
