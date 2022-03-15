#include <iostream>
#include <vector>
#include <cessert>

using namespace std;

#include "point.h"
#include "polygon.h"

//parametar constructor

Polygon::Polygon(int numb)
{



   assert(numb > 0);
   vrtc.resize(numb);
}


void Polygon::read()
{

    for (int i = 0; i < vrtc.size(); i++)
    {
       cout << "Vertex" << i << ": ";
       double x;
       cin >> x;
       double y;
       cin >> y;
       vrtc[i].setX(x);
       vrtc[i].setY(y);
    }
}

void Polygon::print() const
{
 for (int i = 0; i < vrtc.size(); i++)
   {
   vrtc[i].print();
   cout << " ";
   	}
   cout << endl;
}
