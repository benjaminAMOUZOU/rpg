//
// Created by benjamin on 02/07/22.
//

#include "Piece.h"

Piece::Piece() : longueur(9), largeur(9) {}//9mètres carrés

Piece::Piece(int longueur, int largeur, vector<Porte> portes) {
    this->longueur = longueur;
    this->largeur = largeur;
    this->portes = portes;
}

int Piece::getLargeur() {
    return this->largeur;
}

void Piece::setLargeur(int largeur) {
    this->largeur = largeur;
}

int Piece::getLongueur() {
    return this->longueur;
}

void Piece::setLongueur(int longueur) {
    this->longueur = longueur;
}

vector<Porte> Piece::getPortes() {
    return this->portes;
}

void Piece::setPortes(vector<Porte> portes) {
    this->portes = portes;
}