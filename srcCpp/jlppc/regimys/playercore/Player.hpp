#ifndef SRCCPP_JLPPC_REGIMYS_PLAYERCORE_PLAYER_HPP_
#define SRCCPP_JLPPC_REGIMYS_PLAYERCORE_PLAYER_HPP_

#include <iostream>
#include "Equipe.hpp"
#include <vector>
#include "../../utils/Utils.hpp"
#include "../objects/Pokemon.hpp"
using namespace std;

class Player : public RegimysObject{
public:
	Player(string name);
	Equipe getEquipe();
	void addItem(int itemID);
	int checkItem(int itemID);
	bool deleteItem(int itemID);
	string getName(){return name;}
	int getDressID(){return dressID;}
	void addPokemonToPC(Pokemon toAdd){pc.push_back(toAdd);}
	Pokemon getPoke(int ID){return equipe[ID];}
	void healPoke();
	bool addPokeToEquipe(Pokemon toAdd);
	static Class<Player> *classe = new Class<Player>("Player", 4698764);
private:
	string name;
	int dressID;//9 chiffres
	int bag[Item::getItemNumber()];
	vector<Pokemon> pc = vector<Pokemon>();
	Equipe equipe;
};

#endif /* SRCCPP_JLPPC_REGIMYS_PLAYERCORE_PLAYER_HPP_ */
