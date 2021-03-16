/*************************************************************
 * File: game.h
 * Author: Br. Burton
 *
 * Description: Contains the definition of the game class.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#ifndef GAME_H
#define GAME_H

#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"
#include "rocks.h"
#include "ship.h"
#include "bullet.h"
#include <vector>
#include <sstream>
#define CLOSE_ENOUGH 15

using namespace std;

/*****************************************
 * GAME
 * The main game class containing all the state
 *****************************************/
class Game
{
public:
   /*********************************************
    * Constructor
    * Initializes the game
    *********************************************/
   Game(Point tl, Point br);
   ~Game();
   
   /*********************************************
    * Function: handleInput
    * Description: Takes actions according to whatever
    *  keys the user has pressed.
    *********************************************/
   void handleInput(const Interface & ui);
   
   /*********************************************
    * Function: advance
    * Description: Move everything forward one
    *  step in time.
    *********************************************/
   void advance();
   
   /*********************************************
    * Function: draw
    * Description: draws everything for the game.
    *********************************************/
   void draw(const Interface & ui);
   
   void advanceBullets();
   void advanceAsteroids();
   void handleCollisions();
   void cleanUpZombies();
   void createAsteroids();
   
private:
//The coordinates of the screen
   Point topLeft;
   Point bottomRight;
   Ship ship;
   //to keep track of the score
   int score;
   
   vector <Bullet> bullets;
   
   vector <Rock*> asteroids;
   
   
};

#endif /* GAME_H */

