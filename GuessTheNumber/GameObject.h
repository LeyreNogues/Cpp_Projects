/*
 * GameObject.h
 *
 *  Created on: Jun 1, 2020
 *      Author: lnogues
 */

#ifndef GUESSTHENUMBER_GAMEOBJECT_H_
#define GUESSTHENUMBER_GAMEOBJECT_H_

class GameObject {
public:
	GameObject( int gameLevel): level(gameLevel) {};
	virtual ~GameObject();

	void initializeLevel();
	void runGame();
	void endGame();

private:
	int level;
};

#endif /* GUESSTHENUMBER_GAMEOBJECT_H_ */
