#include <iostream>
using namespace std;

int main() {

    int amount;
    
    cout << "Enter the amount: ";
    cin >> amount;

    // main logic
    int hundredRupeeNotes = amount / 100;
    amount %= 100;
    
    int fiftyRupeeNotes = amount / 50;
    amount %= 50;
    
    int twentyRupeeNotes = amount / 20;
    amount %= 20;
    
    int oneRupeeNotes = amount;
    

    //switch case started here
    switch(hundredRupeeNotes) {
        case 0:
            break;
        default:
            cout << "100: " << hundredRupeeNotes << endl;
    }
    
    switch(fiftyRupeeNotes) {
        case 0:
            break;
        default:
            cout << "50: " << fiftyRupeeNotes << endl;
    }

    switch(twentyRupeeNotes) {
        case 0:
            break;
        default:
            cout << "20: " << twentyRupeeNotes << endl;
    }

    switch(oneRupeeNotes) {
        case 0:
            break;
        default:
            cout << "1: " << oneRupeeNotes << endl;
    }
}