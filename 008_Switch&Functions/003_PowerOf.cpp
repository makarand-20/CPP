// Find a^b

#include <iostream>
#include <cmath>
using namespace std;

int pow(int a, int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }
    return res;
}

int main()
{
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << a << "^" << b << " = " << pow(a,b) << endl;
}