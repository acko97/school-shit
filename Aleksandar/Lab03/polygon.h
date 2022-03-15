#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
using namespace std;

#include "P	oint.h"

class Polygon
{


            public:
            Polygon(int numb);
            void read();
            void print() const;           

            private:
            vector<Point> vrtc;








};

#endif
