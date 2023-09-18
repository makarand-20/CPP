// Find the number of notes for given amount

#include <iostream>
using namespace std;

int main() {

    int amount;
    
    cout << "Enter the amount: ";
    cin >> amount;

    int hundredRupeeNotes = amount / 100;
    amount %= 100;
    
    int fiftyRupeeNotes = amount / 50;
    amount %= 50;
    
    int twentyRupeeNotes = amount / 20;
    amount %= 20;
    
    int oneRupeeNotes = amount;

    
    if(hundredRupeeNotes > 0)
        cout << "100: " << hundredRupeeNotes << endl;
    
    if(fiftyRupeeNotes > 0)
        cout << "50: " << fiftyRupeeNotes << endl;

    if(twentyRupeeNotes > 0)    
        cout << "20: " << twentyRupeeNotes << endl;

    if(oneRupeeNotes > 0)
        cout << "1: " << oneRupeeNotes << endl;
}
