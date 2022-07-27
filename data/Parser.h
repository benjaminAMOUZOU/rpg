//
// Created by benjamin on 18/07/22.
//

#ifndef RPG_PARSER_H
#define RPG_PARSER_H

#include "../modeles/Personnage.h"
#include "../modeles/Druide.h"
#include "../modeles/Ouvrier.h"
#include "../modeles/Soldat.h"
#include "../modeles/Religieux.h"
#include "../modeles/Arme.h"
#include "../modeles/Amulette.h"
#include "../modeles/Potion.h"
#include "../dependances/rapidjson/document.h"
#include <fstream>
#include <cstring>
#include <iostream>
#include <typeinfo>

#define PEOPLE_FILENAME "../data/level.save"
#define MAP_FILENAME "../data/map.save"

using namespace std;

class Parser {
public:
    static void test() {
        Personnage *joueur = new Druide("Benjamin", 5, 50);
        joueur->getSac()->addOutil(new Arme("Epée Glamdring", 50, 5));
        joueur->getSac()->addOutil(new Amulette("Baton du magicien", 5, 10));

        Personnage *adversaire = new Ouvrier("Saroumane", 5, 60);
        adversaire->getSac()->addOutil(new Arme("Epée Glamdring", 50, 5));
        adversaire->getSac()->addOutil(new Amulette("Baton du magicien", 5, 10));

        vector<Personnage *> personnages = {joueur, adversaire};

        //operation
        //save(personnages);
        /*personnages = load_people();
        for (auto personnage: personnages) {
            personnage->print();
        }*/
    }

    static void save(vector<Personnage *> personnages) {
        string json = "{\"personnages\": [";

        //Ouverture du fichier en ecriture
        ofstream fichier;
        fichier.open(PEOPLE_FILENAME, ios::trunc | ios::out);
        if (fichier) {
            for (int i = 0; i < personnages.size(); i++) {
                json += personnages[i]->toJson();
                if (i != (personnages.size() - 1)) {
                    json += ", ";
                }
            }
            json += "]}";
            //Ecriture du json
            fichier << json;

            //Fermerture du fichier
            fichier.close();
        }
    }

    static vector<Personnage *> load_people() {
        rapidjson::Document document = load("map.save");//Chargement du fichier de la map
        vector<Personnage *> vectorPersonnages;

        //Parcours des personnages du DOM
        const rapidjson::Value &personnages = document["personnages"];
        assert(personnages.IsArray());
        for (rapidjson::SizeType i = 0; i < personnages.Size(); i++) {

            //Récupération des informations atomiques du personnages du DOM
            Personnage *personnage;
            string type_personnage = personnages[i]["type"].GetString();
            string nom = personnages[i]["nom"].GetString();
            int niveauSante = personnages[i]["niveauSante"].GetInt();
            int niveauHabilete = personnages[i]["niveauHabilete"].GetInt();

            //Création du personnage approprié
            if (type_personnage.find("Druide") != std::string::npos) {
                personnage = new Druide(nom, niveauSante, niveauHabilete);
            } else if (type_personnage.find("Soldat") != std::string::npos) {
                personnage = new Soldat(nom, niveauSante, niveauHabilete);
            } else if (type_personnage.find("Religieux") != std::string::npos) {
                personnage = new Religieux(nom, niveauSante, niveauHabilete);
            } else if (type_personnage.find("Ouvrier") != std::string::npos) {
                personnage = new Ouvrier(nom, niveauSante, niveauHabilete);
            }

            //Récupération des outils du sac
            for (auto &o: personnages[i]["sac"].GetArray()) {
                string type_outil = o["type"].GetString();
                string libelle = o["libelle"].GetString();
                Outil *outil;

                if (type_outil.find("Arme") != std::string::npos) {
                    outil = new Arme(libelle, o["point"].GetInt(), o["niveau"].GetInt());
                } else if (type_outil.find("Amulette") != std::string::npos) {
                    outil = new Amulette(libelle, o["portee"].GetInt(), o["puissance"].GetInt());
                } else if (type_outil.find("Potion") != std::string::npos) {
                    outil = new Potion(libelle, o["point"].GetInt());
                }

                personnage->getSac()->addOutil(outil);
            }

            //Vérification de la création du personnage
            vectorPersonnages.push_back(personnage);
        }
        return vectorPersonnages;
    }

    static void load_map(int i, int *tableau) {
        rapidjson::Document document = load(MAP_FILENAME);//Chargement du fichier de la map
        const rapidjson::Value &niveau = document["levels"][i];
        assert(niveau.IsArray());
        for (rapidjson::SizeType j = 0; j < niveau.Size(); j++) {
            //Modification des valeurs du tableau passé par adresse, NB un tableau de 3750
            tableau[j] = niveau[j].GetInt();
        }
    }

    static rapidjson::Document load(string filename) {
        string ligne = "";
        string json = "";


        //Ouverture du fichier en lecture et lecture du contenu
        ifstream fichier;
        fichier.open(filename, ios::in);
        if (fichier) {
            while (!fichier.eof()) {
                fichier >> ligne;
                json += ligne;
            }
        }

        //Parse a JSON string into DOM.
        rapidjson::Document document;
        const char *chaine = json.c_str();
        document.Parse(chaine);
        return document;
    }
};


#endif //RPG_PARSER_H
