// Aggressive Cows
// https://www.codingninjas.com/studio/problems/aggressive-cows_1082559

#include <iostream>
using namespace std;

bool isPossibleNumber(int stalls[], int n, int k, int mid){
    
    int cowCount = 1;
    int lastCowPosition = stalls[0];

    for(int i = 0; i < n; i++){
        if(stalls[i] - lastCowPosition >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastCowPosition = stalls[i];
        }
    } 
    return false;   
}

int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;

    int stalls[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>stalls[i];
    }

    int k;
    cout<<"Enter maximum no of students : ";
    cin>>k;

    // actual logic starts form here

    if(n < k){
        cout<<-1;
        return -1;
    }
    sort(stalls, stalls + n);
    int start = 0;
    int maxi = -1;
    for(int i = 0; i < n; i++){
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int ans = -1;


    while(start <= end){
        int mid = start + (end - start)/2;

        if(isPossibleNumber(stalls,n, k, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<ans;
    return ans;
}