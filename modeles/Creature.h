//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_CREATURE_H
#define RPG_CREATURE_H

#include "GameObject.h"
#include <string>

using namespace std;

class Creature : public GameObject {
protected:
    string nom;
    int niveauSante;

public:
    Creature();

    Creature(string nom, int niveauSante);

    string getNom();

    void setNom(string nom);

    int getNiveauSante();

    void setNiveauSante(int niveauSante);

};


#endif //RPG_CREATURE_H
