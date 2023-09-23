// Find peak element of given array (Max element in array)

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }

    cout<<"Pick Element : "<<start<<endl;
}