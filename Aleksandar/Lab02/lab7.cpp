#include <iostream>

using namespace std;

const int CPCT = 256;

int strSize(char* ptr_str)
{
    int result = 0;
    
    
    while (*(ptr_str++) && ++result	 < CPCT);
    
    return result;
}//strsize    
    void strconcat(char* ptr_frst, char* ptr_scnd, char* ptr_dest)
{
    while  (*ptr_frst)
    {
      *(ptr_dest++) = *(ptr_frst++);
    }
    while (*ptr_scnd)
    {
       *(ptr_dest++) = *(ptr_scnd++);
    }
    *ptr_dest = '\0';
}//STRconcat
int main()
{
   char str_frst[CPCT];
   
   cout << "> ";
   cin >> str_frst;
   
   char str_scnd[CPCT];
   
   cout << "> ";
   cin >> str_scnd;
   
   char str_thrd[CPCT];
   
   strconcat(str_frst, str_scnd, str_thrd);
   
   cout << "Concatented: " << str_thrd << endl;
   
   
 return 0;
}
