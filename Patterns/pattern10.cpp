/*
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (char j = 1; j <= n; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}