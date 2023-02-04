#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    string order;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;

    if ((a > b && b > c) || (a < b && b < c))
    {
        order = "in order";
    }
    else
    {
        order = "not in order";
    }

    cout << a << " " << b << " " << c << "   " << order << endl;
    return 0;
}