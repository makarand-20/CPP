/*

12345 * 54321
1234 * * 4321
123 * * * 321
12 * * * * 21
1 * * * * * 1

*/
#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }

        for (int j = i; j <= n; j++)
        {
            cout<<"* ";
        }

        for (int k = i; k >= 1; k--)
        {
            cout<<k;
        }

        cout<<endl;
    }
}