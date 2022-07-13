//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_OUTIL_H
#define RPG_OUTIL_H

#include "GameObject.h"
#include <string>

using namespace std;

class Outil : public GameObject {

protected:
    string libelle;

public:
    Outil();

    Outil(string libelle);

    string getLibelle();

    void setLibelle(string libelle);

};


#endif //RPG_OUTIL_H
