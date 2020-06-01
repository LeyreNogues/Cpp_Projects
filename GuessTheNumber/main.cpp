/*
 * main.cpp
 *
 *  Created on: Jun 1, 2020
 *      Author: Leyre Nogués
 */

#include<GameObject.h>

enum level { EASY, MEDIUM, HARD} game_level;

int main() {

	game_level = EASY;
	GameObject* game = new GameObject( game_level );
	game->initializeLevel();
	game->runGame();
	game->endGame();

	delete game;

}



