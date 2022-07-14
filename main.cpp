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
    scene.presentePiece();
    scene.choixAdversaire();

    return 0;
}
