//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_ARME_H
#define RPG_ARME_H

#include "Outil.h"

using namespace std;

class Arme : public Outil {
private:
    double point;
    double niveau;

public:
    Arme();

    Arme(string libelle, double point, double niveau);

    double getPoint();

    void setPoint(double point);

    double getNiveau();

    void setNiveau(double niveau);
};


#endif //RPG_ARME_H
