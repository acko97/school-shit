#include <iostream>

using namespace std;

class Point;


   public:
      Point();
      Point(double x,double y);
      void print() const;
      
   private:
    double x;
    double y;



int main()
{
//allocate dynamic variable
int* ptr = nullptr;

    ptr = new int;

     *ptr = 42;
     cout << "Dynamic varible value: " << *ptr << endl;
     
     //free memory
     if (ptr)
     {
        delete ptr;
        ptr = nullptr;
     }
     
  return 0;
}//main
