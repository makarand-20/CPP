// Sort an array of 0s, 1s

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0;
    int high = n-1;

    while(low <= high){
        if(arr[low] == 0){
            low++;
        }
        else if(arr[high] == 1){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}