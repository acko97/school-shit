#include <iostream>

using namespace std;

int main()
{
   int a = 42;
   int* ptr_frst = &a;
   int* ptr_scnd = &a;
   
   cout << "Variable is: " << a << endl;//42
   *ptr_frst = 1;
    cout << "Variable is: " << a << endl; // ?
    *ptr_scnd = 2;
     cout << "Variable is: " << a << endl;// ?
   
    return 0;
 }//main
