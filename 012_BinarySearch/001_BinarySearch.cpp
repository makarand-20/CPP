// binary search 
// Time Complexity: O(log n)


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter element to find : ";
    cin>>k;

    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == k){
            cout<<"Element finds at index "<<mid <<endl;
            return 0;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}