#include <iostream>
using namespace std;

int main(){
    int n = 1248;
    
    int sum = 0;
    int mul = 1;

    while(n!=0){
        int temp = n % 10;
        sum += temp;
        mul *= temp;
        n = n / 10;
    }

    int answer =  mul - sum;
    cout<<answer<<endl;
}