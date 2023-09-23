// search in rotated array

#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            cout<< mid<<endl;
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<-1;
    return -1;
}

int pivot(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to be search : ";
    cin>>key;

    int p = pivot(arr, n);

    if(key >= arr[p] && key <= arr[n-1]){
        binarySearch(arr, p, n-1, key);
    }
    else{
        binarySearch(arr, 0, p-1, key);
    }

}