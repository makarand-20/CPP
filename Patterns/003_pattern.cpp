/*
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0; i <= n; i++){
        for(int j = n; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}