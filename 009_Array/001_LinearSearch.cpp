#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout<<"Enter size of array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout<<"Enter Key: ";
    cin >> key;

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            cout << "Key found at index " << i << endl;
            return 0;
        }
    }

    cout << "Key not found" << endl;
    return 0;
}