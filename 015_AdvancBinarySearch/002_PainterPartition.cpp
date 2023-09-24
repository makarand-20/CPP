// Painter Partition Problem 
// Pre-requisite = Book allocation Problem...

//https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557

#include <iostream>
using namespace std;

bool isPossibleNumber(int boards[], int n, int k, int mid){
    int paintersCount = 1;
    int paintBoardsCount = 0;

    for(int i = 0; i < n; i++){
        if(paintBoardsCount + boards[i] <= mid){
            paintBoardsCount += boards[i];
        }
        else{
            paintersCount++;
            if(paintersCount > k || boards[i] > mid){
                return false;
            }
            paintBoardsCount = boards[i];
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;

    int boards[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>boards[i];
    }

    int k;
    cout<<"Enter maximum no of students : ";
    cin>>k;

    // actual logic starts form here

    if(n < k){
        cout<<-1;
        return -1;
    }
    int start = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += boards[i];
    }
    int end = sum;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(isPossibleNumber(boards,n, k, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<ans<<endl;
    return ans;
}