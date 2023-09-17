// reverses a number

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;

    while(n!=0){
        int rem = n % 10;
        if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
            cout<<"Overflow"<<endl;
            break;
        }
        ans = ans * 10 + rem;
        n = n / 10;
    }
    cout<<ans<<endl;
}