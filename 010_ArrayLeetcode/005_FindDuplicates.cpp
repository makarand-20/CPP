// find-all-duplicates-in-an-array
// there may be more than one duplicate number in the array

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;

    int ans = 0;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    unordered_set<int> answer;
    for(int i = 0; i < n; i++){
        if(freq[arr[i]] > 1){
            answer.insert(arr[i]);
        }
    }

    //print the answer
    for(int i = 0; i < n; i++){
        if(answer.find(arr[i]) != answer.end()){
            cout << arr[i] << " ";
            answer.erase(arr[i]);
        }
    }

}