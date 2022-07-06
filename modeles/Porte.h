//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_PORTE_H
#define RPG_PORTE_H

#include "GameObject.h"

class Porte : public GameObject {
private:
    int position;

public:
    Porte();

    Porte(int position);

    int getPosition();

    void setPosition(int);
};


#endif //RPG_PORTE_H
