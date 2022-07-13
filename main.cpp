#include <iostream>
#include "consoles/Scene.h"

int main() {
    int numero = 0;
    string nom = "";
    Scene scene;

    scene.titre();
    numero = scene.choisirPersonnage();
    nom = scene.choisirNom();
    scene.creationDecor(numero, nom);

    //Pour demain 14 Juillet
    //1- Completer sac et outil du personnage (méthode non écrite, affectation et vérification du bon fonctionnement)
    //2- Méthode print

    return 0;
}
