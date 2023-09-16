/*
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (char i = 'A'; i < 'A' + n; i++)
    {
        char count = i;
        for (int j = 1; j <= n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}