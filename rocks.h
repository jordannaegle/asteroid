#ifndef rocks_h
#define rocks_h

#define BIG_ROCK_SIZE 16
#define MEDIUM_ROCK_SIZE 8
#define SMALL_ROCK_SIZE 4

#define BIG_ROCK_SPIN 2
#define MEDIUM_ROCK_SPIN 5
#define SMALL_ROCK_SPIN 10

#include "flyingObject.h"

// Define the following classes here:


//Rock class
class Rock : public FlyingObject
{
public:
   Rock();
   virtual void draw() {} 
protected:
   float rotation;
};

//BigRock class
class BigRock : public Rock
{
public:
   BigRock();
   void draw(Point point);
};

//MediumRock class
class MediumRock : public Rock
{
   MediumRock();
   void draw(Point point);
};

//SmallRock class
class SmallRock : public Rock
{
   SmallRock();
   void draw(Point point);
};





#endif /* rocks_h */
