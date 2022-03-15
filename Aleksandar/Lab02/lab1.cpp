#include <iostream>	

using namespace std;

int main()
{

   int var = 42;
   int* ptr = &var;
   cout << "Address is: " << ptr << endl;
   cout << "Value by the pointer: " << (*ptr) << endl;
   *ptr = 1;
   cout << "Value by the pointer: " << (*ptr) << endl;
   cout << "Value by the variable: " << var << endl;
   
  return 0;
}//main
