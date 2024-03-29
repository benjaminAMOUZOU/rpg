cmake_minimum_required(VERSION 3.22)
project(rpg)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5.1 COMPONENTS system graphics audio network REQUIRED)

add_executable(rpg
        modeles/Amulette.cpp
        modeles/Amulette.h
        modeles/Animal.cpp
        modeles/Animal.h
        modeles/Arme.cpp
        modeles/Arme.h
        modeles/Batiment.cpp
        modeles/Batiment.h
        modeles/Creature.cpp
        modeles/Creature.h
        modeles/Druide.cpp
        modeles/Druide.h
        modeles/GameObject.cpp
        modeles/GameObject.h
        modeles/Outil.cpp
        modeles/Outil.h
        modeles/Bouclier.h
        modeles/Bouclier.cpp
        modeles/Epee.h
        modeles/Epee.cpp
        modeles/Hache.h
        modeles/Hache.cpp
        modeles/Massue.h
        modeles/Massue.cpp
        modeles/Ouvrier.cpp
        modeles/Ouvrier.h
        modeles/Personnage.cpp
        modeles/Personnage.h
        modeles/Piece.cpp
        modeles/Piece.h
        modeles/Porte.cpp
        modeles/Porte.h
        modeles/Potion.cpp
        modeles/Potion.h
        modeles/Religieux.cpp
        modeles/Religieux.h
        modeles/Sac.cpp
        modeles/Sac.h
        modeles/Soldat.cpp
        modeles/Soldat.h
        modeles/CleTeleportation.cpp
        modeles/CleTeleportation.h
        modeles/PotionRegeneration.cpp
        modeles/PotionRegeneration.h
        modeles/Feu.cpp
        modeles/Feu.h
        modeles/Foudre.cpp
        modeles/Foudre.h
        modeles/Glace.cpp
        modeles/Glace.h
        utils/consts.hpp
        utils/distribution.h
        utils/tilemap.hpp
        windows/Menu.h
        windows/Menu.cpp
        windows/ChoixPerso.h
        windows/ChoixPerso.cpp
        windows/Battle.h
        windows/Battle.cpp
        windows/Scene.h
        windows/Scene.cpp
        main.cpp
        data/Parser.h)

target_link_libraries(rpg PRIVATE sfml-audio sfml-graphics sfml-network sfml-system)