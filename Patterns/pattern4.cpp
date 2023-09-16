/*
10 11 12 13 14 
15 16 17 18 19 
20 21 22 23 24 
25 26 27 28 29 
30 31 32 33 34 
35 36 37 38 39 
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count = 10;
    for(int i = 0; i <= n; i++){
        for (int j = 1; j <= n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}