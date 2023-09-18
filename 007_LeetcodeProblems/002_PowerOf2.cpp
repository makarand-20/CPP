// Find if a number is power of 2 or not

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if(ans == n){
            cout << "true";
            return 0;
        }
    }
    cout << "false";
}

// or
// just a slight diff 
// but its optimized one 

int main(){
    int n;
    cin >> n;

    int ans = 1;

    for (int i = 0; i <= 30; i++)
    {
        if(ans == n){
            cout << "true";
            return 0;
        }
       if(ans < INT_MAX/2){
            ans = ans * 2;
       }     
    }
    cout << "false";
}