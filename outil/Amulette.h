//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_AMULETTE_H
#define RPG_AMULETTE_H

#include "Outil.h"
#include <string>

using namespace std;

class Amulette : public Outil {

private:
    double portee;
    double puissance;

public:
    Amulette();

    Amulette(string libelle, double portee, double puissance);

    double getPortee();

    void setPortee(double portee);

    double getPuissance();

    void setPuissance(double puissance);

};


#endif //RPG_AMULETTE_H
