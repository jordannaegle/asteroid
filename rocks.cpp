#include "rocks.h"
#include "uiDraw.h"
#include "point.h"

using namespace std;

// Put your Rock methods here
Rock::Rock()
{
   
}

BigRock::BigRock()
{
   setCoord(10, 10);
}

void BigRock::draw(Point point)
{
   drawLargeAsteroid(point, BIG_ROCK_SPIN);
}

void MediumRock::draw(Point point)
{
   drawMediumAsteroid(point, MEDIUM_ROCK_SIZE);
}

void SmallRock::draw(Point point)
{
   drawSmallAsteroid(point, SMALL_ROCK_SIZE);
}

