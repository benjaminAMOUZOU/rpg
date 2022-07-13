//
// Created by benjamin on 06/07/22.
//

#ifndef RPG_SCENE_H
#define RPG_SCENE_H

#include "../modeles/Personnage.h"
#include <string>

using namespace std;

//Cette class contiendra des méthodes statiques de simulation du jeu en console
class Scene {

public:
    Personnage *joueur;

    Scene();

    //Titre du jeu
    void titre();

    //Choix du personnage par le joueur
    int choisirPersonnage();

    void creationDecor(int numero, string nom);

    string choisirNom(void);
    //Création du cadre du jeu
    //Création du personnage du joueur
    //Création du batiment et de pieces et des personnages pour le combat
};


#endif //RPG_SCENE_H
