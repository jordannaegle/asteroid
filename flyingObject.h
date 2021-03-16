//
//  flyingObject.h
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#ifndef flyingObject_h
#define flyingObject_h
#include "point.h"
#include "velocity.h"


class FlyingObject
{
public:
   FlyingObject()
   {
      //make object spawn alive
      alive = true;
      //object location
      Point point;
      //speed
      Velocity velocity;
      
      
   }
   virtual ~FlyingObject()
   {
      //velocity = NULL;
      point = NULL;
   }
protected:
   bool alive;
   Velocity velocity;
   Point point;
   
public:
   Point getPoint();
   Velocity getVelocity();
   void setPoint(Point point);
   void setVelocity(Velocity velocity);
   bool isAlive();
   void kill();
   void advance();
   void setCoord(float x, float y);
   
};

#endif /* flyingObject_h */
