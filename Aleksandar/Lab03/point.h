#ifndef POINT_H
#define POINT_H

#include <vector>

using namespace std;

class Point
{
    public:
          Point();               //Default
          Point(double x,double y);
          void setX(double x);
          double getX() const;
          void setY(double y);
          double getY() const;
          
     private:
           double x;
           double y;
};       


#endif
