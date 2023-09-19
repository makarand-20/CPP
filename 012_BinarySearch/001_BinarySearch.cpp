// binary search 
// Time Complexity: O(log n)


#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            cout << "Key found at index: " << mid << endl;
            return 0;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
}