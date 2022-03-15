#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygone.h"

class Triangle : public Polygon
{

     public:
          Triangle();
          void read();
          void print() const;
          
     private:
         enum [NUMB_VRTC = 3};
         
}
#endif
