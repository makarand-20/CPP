// Decimal to Binary

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    int i = 1;

    while(n!=0){
        int rem = n % 2;
        ans = ans + rem * i;
        i = i * 10;
        n = n / 2;
    }
    cout<<ans<<endl;
}

