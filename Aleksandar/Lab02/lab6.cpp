#include <iostream>

using namespace std;

const int CPCT = 256;

void read(double* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
         cout << "[" << i << "] = ";
         cin >> *(arr + i);
     }
}//read

void print(const double* arr, int size)
{
    for (int i = 0;  i < size; i++)
    {
       cout << *(arr + i) << " ";
    }
    cout << endl;
}//read
int main()
{
  //static array
  double arr[CPCT];
  read(arr, 8);
  print(arr, 8);
  
 return 0;
}//main
