/*
Overworld.hpp
Auteur : Jlppc
Fichier sous license GPL-3.0
http://opmon-game.ga
Contient le namespace Overworld
*/
#ifndef OVERWORLD_HPP
#define OVERWORLD_HPP
#include "MainFrame.hpp"

namespace MainFrame {
/**
Contient les éléments fonctionnels de l'overworld
*/
namespace Overworld {
void initVars();
void verifVars();
int overworld();
void deleteVars();
int boucle();
void up();
void down();
void left();
void right();
extern Plan *actuel;
extern SDL_Texture *spritePP[4];
extern SDL_Texture *marchePP[4];
extern SDL_Rect ppPos;
extern SDL_Rect mapPos;
extern Mix_Music *fond;
}
}

#endif // OVERWORLD_HPP
