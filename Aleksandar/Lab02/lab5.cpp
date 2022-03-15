#include <iostream>

using namespace std;
int* foo(int* ptr_str);
{
    int bar = 0;
    
    return &bar;
}

int main()
{
    int* ptr = foo();
    cout << ptr << endl;
       	
 return 0;
}
