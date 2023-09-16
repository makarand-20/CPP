/*
A 
B C 
C D E 
D E F G 
E F G H I
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch = 'A';
    for (char i = 1; i <= n; i++)
    {
        char tempChar = ch;
        for (int j = 1; j <= i; j++)
        {
            cout<<tempChar<<" ";
            tempChar++;
        }
        ch++;
        cout<<endl;
    }
}