//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_PERSONNAGE_H
#define RPG_PERSONNAGE_H

#include "Creature.h"
#include "Sac.h"

using namespace std;

class Personnage : public Creature {
protected:
    int niveauHabilite;
    Sac *sac;

public:
    Personnage();

    Personnage(string nom, int niveauSante, int niveauHabilite);

    Personnage(const Personnage &personnage);

    int getNiveauHabilite();

    void setNiveauHabilite(int niveauHabilite);

    ~Personnage();

    Personnage &operator=(Personnage &personnage);

    virtual void print();
};


#endif //RPG_PERSONNAGE_H
