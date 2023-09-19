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

    int s;
    cout << "Enter the value of k: ";
    cin >> s;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n ; j++) {
            for (int k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == s){
                    cout << arr[i] << "+" << arr[j] << "+" << arr[k] << endl;
                }
            }
        }
    }
}