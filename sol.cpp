#include <iostream>
using namespace std;
 
int main()
{   
    string a;
    int i;
    cin >> a;
    
    for(i=0; i < a.length();)
    {
       if(a[i] == '.')
       {
         cout << 0 ;
         i++ ;
       }
      else
      {
        if (a[i+1] == '.')
        {
          cout << 1;
          i = i+2 ;
        }
        else
        {
          cout << 2 ;
          i = i+2 ;
        }
      }
    }
    return 0; 
}
