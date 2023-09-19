// find elements that sum to a given value

#include <iostream>
#include <vector>
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

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n ; j++) {
            if (arr[i] + arr[j] == k) {
                cout<<arr[i]<<"+"<<arr[j]<<endl;
            }
        }
    }
}