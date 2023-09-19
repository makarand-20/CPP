#include <iostream>

#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    unordered_set<int> uniqueFreq;
    for(int i = 0; i < n; i++){
        uniqueFreq.insert(freq[arr[i]]);
    }

    if(freq.size() == uniqueFreq.size()){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

}