//
//  flyingObject.cpp
//  Skeet
//
//  Created by Jordan Naegle on 2/28/21.
//

#include <stdio.h>
#include "flyingObject.h"
#include "point.h"
#include "velocity.h"


Point FlyingObject::getPoint()
{
   return point;
}

Velocity FlyingObject::getVelocity()
{
   return velocity;
}

void FlyingObject::setPoint(Point point)
{
   this->point = point;
   
}

void FlyingObject::setVelocity(Velocity velocity)
{
   this->velocity = velocity;
}

void FlyingObject::advance()
{
   point.setX(point.getX()+velocity.getDx());
   point.setY(point.getY()+velocity.getDy());
}

void FlyingObject::kill()
{
   alive = false;
}

bool FlyingObject::isAlive()
{
   return alive;
}

void FlyingObject::setCoord(float x, float y)
{
    point.setX(x);
    point.setY(y);
    
}

