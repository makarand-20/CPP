// Number of 1 bits in a given numbers

#include <iostream>
using namespace std;

int main(){

    long long n = 0011101011111111010111;
    int count = 0;

    while(n!=0){
        //checking its last bit
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    cout<<"Number of 1's = "<<count<<endl;
}