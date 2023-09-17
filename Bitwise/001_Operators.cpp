#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 5;
    
    cout << "(a & b) = " << (a & b) << endl; 
    // 7 = 0111, 5 = 0101, 0111 & 0101 = 0101 = 5 👆

    cout << "(a | b) = " << (a | b) << endl;
    // 7 = 0111, 5 = 0101, 0111 | 0101 = 0111 = 7 👆

    cout << "(a ^ b) = " << (a ^ b) << endl;
    // XOR =  7 = 0111, 5 = 0101, 0111 ^ 0101 = 0010 = 2 👆

    cout << "(~a) = " << (~a) << endl; 
    //always return negative of (a+1) 👆

}