#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(const vector<int>& arr1, const vector<int>& arr2) {

    vector<int> result;
    
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            result.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return result;
}

int main() {
    int size1, size2;

    // 1st array
    cout << "Enter the size of the first array: ";
    cin >> size1;
    
    vector<int> arr1(size1);
    cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    
    // 2nd array
    cout << "Enter the size of the second array: ";
    cin >> size2;
    
    vector<int> arr2(size2);
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    
    // Intersection
    vector<int> intersection = findIntersection(arr1, arr2);
    cout << "Intersection: ";

    // Print intersection
    for (int num : intersection) {
        cout << num << " ";
    }
    return 0;
}
