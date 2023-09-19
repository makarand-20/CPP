// find total number of occurrences of given word...

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to find : ";
    cin>>key;

    int firstOccCount = firstOcc(arr, n, key);
    int lastOccCount = lastOcc(arr, n, key);

    cout<<lastOccCount - firstOccCount + 1;

}