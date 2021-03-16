/*********************************************************************
 * File: game.cpp
 * Description: Contains the implementaiton of the game class
 *  methods.
 *
 *********************************************************************/

#include "game.h"

// These are needed for the getClosestDistance function...
#include <limits>
#include <algorithm>
#include <vector>
#include "flyingObject.h"
using namespace std;

/*
* Constructor
*/
Game :: Game(Point tl, Point br)
{
   score = 0;
}

/*
 Game Destructor
 */

Game :: ~Game()
{
   
}

void Game :: advance()
{
   
   advanceAsteroids();
}

void Game :: advanceAsteroids()
{
   
}

void Game :: advanceBullets()
{
   
}

void Game :: handleCollisions()
{
   
   /*
   // now check for a hit (if it is close enough to any live bullets)
   for (int i = 0; i < bullets.size(); i++)
   {
      if (bullets[i].isAlive())
      {
         // this bullet is alive, see if its too close

         // check if the bird is at this point (in case it was hit)
         if (bird != NULL && bird->isAlive())
         {
            // BTW, this logic could be more sophisiticated, but this will
            // get the job done for now...
            if (fabs(bullets[i].getPoint().getX() - bird->getPoint().getX()) < CLOSE_ENOUGH
                && fabs(bullets[i].getPoint().getY() - bird->getPoint().getY()) < CLOSE_ENOUGH)
            {
               //we have a hit!
               
               // hit the bird
               int points = bird->hit();
               score += points;
               
               // the bullet is dead as well
               bullets[i].kill();
            }
         }
      } // if bullet is alive
      
   } // for bullets
   */
   
}

void Game :: cleanUpZombies()
{
   
   /*
   // Look for dead bullets
   vector<Bullet>::iterator bulletIt = bullets.begin();
   while (bulletIt != bullets.end())
   {
      Bullet bullet = *bulletIt;
      // Asteroids Hint:
      // If we had a list of pointers, we would need this line instead:
      //Bullet* pBullet = *bulletIt;
      
      if (!bullet.isAlive())
      {
         // If we had a list of pointers, we would need to delete the memory here...
         
         
         // remove from list and advance
         bulletIt = bullets.erase(bulletIt);
      }
      else
      {
         bulletIt++; // advance
      }
   }
    */
}

void Game :: handleInput(const Interface & ui)
{
   // Change the direction of the rifle
   if (ui.isLeft())
   {
      //TODO
   }
   
   if (ui.isRight())
   {
      //TODO
   }
   
   // Check for "Spacebar
   if (ui.isSpace())
   {
      /*
      Bullet newBullet;
      newBullet.fire(ship.getPoint(), ship.getAngle());
      
      bullets.push_back(newBullet);
      */
   }
}



void Game :: createAsteroids()
{
   if (asteroids.size() < 4)
   {
   Rock* newRock = NULL;
   newRock = new BigRock();
   newRock->setCoord(-100, 100);
   asteroids.push_back(newRock);
         }
   
}

void Game :: draw(const Interface & ui)
{
   //TODO draw ship
   ship.draw();
   //TODO draw asteroid
   for (int i = 0; i < asteroids.size(); i++)
   {
      asteroids[i]->draw();
   }
   //TODO draw Bullets
   
   Point testPoint;
   BigRock testasteroid;
   testasteroid.setPoint(testPoint);
   testasteroid.draw(testPoint);
   createAsteroids();
   createAsteroids();
   
}















// You may find this function helpful...



/**********************************************************
 * Function: getClosestDistance
 * Description: Determine how close these two objects will
 *   get in between the frames.
 **********************************************************/
/*
float Game :: getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const
{
   // find the maximum distance traveled
   float dMax = max(abs(obj1.getVelocity().getDx()), abs(obj1.getVelocity().getDy()));
   dMax = max(dMax, abs(obj2.getVelocity().getDx()));
   dMax = max(dMax, abs(obj2.getVelocity().getDy()));
   dMax = max(dMax, 0.1f); // when dx and dy are 0.0. Go through the loop once.
   
   float distMin = std::numeric_limits<float>::max();
   for (float i = 0.0; i <= dMax; i++)
   {
      Point point1(obj1.getPoint().getX() + (obj1.getVelocity().getDx() * i / dMax),
                     obj1.getPoint().getY() + (obj1.getVelocity().getDy() * i / dMax));
      Point point2(obj2.getPoint().getX() + (obj2.getVelocity().getDx() * i / dMax),
                     obj2.getPoint().getY() + (obj2.getVelocity().getDy() * i / dMax));
      
      float xDiff = point1.getX() - point2.getX();
      float yDiff = point1.getY() - point2.getY();
      
      float distSquared = (xDiff * xDiff) +(yDiff * yDiff);
      
      distMin = min(distMin, distSquared);
   }
   
   return sqrt(distMin);
}
*/

