#include <iostream>

using namespace std;
/*
void foo(int &par)
{
    par = 1;
    cout << "foo: " << par << endl;
} 
*/
void foo(int* ptr)
{

*ptr = 1;
cout << "foo : " << (*ptr) << endl;

}   

int main()
{
      int a = 42;
      foo(a);
      cout << "main: " << a << endl;
      



 return 0;
}
