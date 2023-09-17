/*
A B C D E F 
A B C D E F 
A B C D E F 
A B C D E F 
A B C D E F 
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}