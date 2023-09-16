/*
11111
 2222
  333
   44
    5
*/
#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = i; j <= n; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}