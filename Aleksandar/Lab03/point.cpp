#include <iostream>

using namespace std;

#include "point.h"

Point::Point()
{
  x = 0;
  y = 0;
  
}//Point

void Point::setX(double x)
  {
    this->x = x; 
  }//setX

//Get coordinate
double Point::getX() const
{
	
  return x;
}//get Y coordinate

void Point::setY(double y)
  {
    this->y = y; 
  }//setY

//Get coordinate
double Point::getY() const
{
	
  return y;
}//get x coordinate Y

void Point::prnt() const
{
   cout << "(" << x << ", " << y << ")";
}//point

