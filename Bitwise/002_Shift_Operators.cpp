#include <iostream>
using namespace std;

int main() {
    int a = 21;
    
    cout << "(a << 2) = " << (a << 2) << endl; 
    // 7 = 0111, 5 = 0101, 0111 << 0101 = 011100000 = 224 👆

    cout << "(a << 1) = " << (a << 1) << endl;
    // 7 = 0111, 5 = 0101, 0111 << 0101 = 01110 = 14 👆

    cout << "(a >> 2) = " << (a >> 2) << endl;
    // 7 = 0111, 5 = 0101, 0111 >> 0101 = 0000 = 0 👆

    cout << "(a >> 1) = " << (a >> 1) << endl;
    // 7 = 0111, 5 = 0101, 0111 >> 0101 = 0011 = 3 👆

}