#include <iostream>

using namespace std;

int main(){

      int a = 1;
      int b = 2;
     
     int* ptr = &a;
     *ptr = 100;
     cout << "a = " << a << endl;
     
     
     ptr = &b;
     *ptr = 200;
     cout << "b " << b << endl;
     
return 0;
}
