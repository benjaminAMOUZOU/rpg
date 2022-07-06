//
// Created by benjamin on 02/07/22.
//

#ifndef RPG_PIECE_H
#define RPG_PIECE_H

#include <vector>
//#include "Batiment.h"
#include "GameObject.h"
#include "Porte.h"

using namespace std;

class Piece : public GameObject {
private:
    int longueur;
    int largeur;
    vector<Porte> portes;//Une pièce ne peut avoir au maximum que quatre portes

public:
    Piece();

    Piece(int longeur, int largeur, vector<Porte> portes);

    int getLongueur();

    void setLongueur(int longueur);

    int getLargeur();

    void setLargeur(int largeur);

    void setPortes(vector<Porte> portes);

    vector<Porte> getPortes();

};


#endif //RPG_PIECE_H
