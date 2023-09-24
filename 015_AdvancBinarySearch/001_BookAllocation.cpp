// book allocation problem using binary search

//https://www.codingninjas.com/studio/problems/allocate-books_1090540

#include <iostream>
using namespace std;

bool isPossibleNumber(int arr[], int n, int m, int mid){
    int studCount = 1;
    int pageSize = 0;

    for(int i = 0; i < n; i++){
        if(pageSize + arr[i] <= mid){
            pageSize += arr[i];
        }
        else{
            studCount++;
            if(studCount > m || arr[i] > mid){
                return false;
            }
            pageSize = arr[i];
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int m;
    cout<<"Enter maximum no of students : ";
    cin>>m;

    // actual logic starts form here

    if(n < m){
        cout<<-1;
        return -1;
    }

    int start = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int end = sum;
    int answer = -1;


    while(start <= end){
        int mid = start + (end - start)/2;

        if(isPossibleNumber(arr, n, m, mid)){
            answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<answer<<endl;
    return answer;
}