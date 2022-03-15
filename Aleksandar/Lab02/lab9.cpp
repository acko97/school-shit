#include <iostream>

using namespace std;

int main()
{

   int* ptr_arr = nullptr;
   
   cout << "How many elements: ";
   int n;
   cin >> n;
   
   ptr_arr = new int[n];
   
   for (int i = 0; i < n; i++)
   {
      ptr_arr[i] = i;
   }
   
   for (int i = 0; i < n; i++)
   {
     cout << ptr_arr[i] << " ";
   }
   cout << endl;
   
   if (ptr_arr)
   {
      delete[] ptr_arr;
      ptr_arr = nullptr;
    
   }

    return 0;
}//main
