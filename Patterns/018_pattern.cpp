/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'E';
    for (char i = 1; i <= n; i++)
    {
        char tempChar = ch;
        for (int j = 1; j <= i; j++)
        {
            cout<<tempChar<<" ";
            tempChar++;
        }
        ch--;
        cout<<endl;
    }
}