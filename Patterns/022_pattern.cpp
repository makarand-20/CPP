/*
12345
 2345
  345
   45
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
            cout<<j;
        }
        cout<<endl;
    }
}