#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int ans = 0;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    cout<<ans<<endl;
}