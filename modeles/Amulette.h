//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_AMULETTE_H
#define RPG_AMULETTE_H

#include "Outil.h"
#include <string>

using namespace std;

class Amulette : public Outil {

protected:
    int portee;
    int puissance;

public:
    Amulette();

    Amulette(string libelle, int portee, int puissance);

    virtual int getNiveau();

    virtual void setNiveau(int portee);

    virtual int getPoint();

    virtual void setPoint(int puissance);

    void print();

    string toJson();

};


#endif //RPG_AMULETTE_H
