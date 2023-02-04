#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int pInt;
    cout << "Enter Positive Integer: ";
    cin >> pInt;
    if (pInt > 3999 || pInt < 0)
    {
        cout << "The positive integer must be between 0 and 3,999" << endl;
        exit(0);
    }

    string result;

    // Gets Ms
    while (pInt >= 1000)
    {
        result = result + "M";
        pInt = pInt - 1000;
    }
    if (pInt >= 900)
    {
        result = result + "CM";
        pInt = pInt - 900;
    }

    // Gets Ds
    while (pInt >= 500)
    {
        result = result + "D";
        pInt = pInt - 500;
    }
    if (pInt >= 400)
    {
        result = result + "CD";
        pInt = pInt - 400;
    }

    // Gets Cs
    while (pInt >= 100)
    {
        result = result + "C";
        pInt = pInt - 100;
    }
    if (pInt >= 90)
    {
        result = result + "XC";
        pInt = pInt - 90;
    }

    // Gets Ls
    while (pInt >= 50)
    {
        result = result + "L";
        pInt = pInt - 50;
    }
    if (pInt >= 40)
    {
        result = result + "XL";
        pInt = pInt - 40;
    }

    // Gets Xs
    while (pInt >= 10)
    {
        result = result + "X";
        pInt = pInt - 10;
    }
    if (pInt >= 9)
    {
        result = result + "IX";
        pInt = pInt - 9;
    }

    // Gets Vs
    while (pInt >= 5)
    {
        result = result + "V";
        pInt = pInt - 5;
    }
    if (pInt >= 4)
    {
        result = result + "IV";
        pInt = pInt - 4;
    }

    // Gets Is
    while (pInt > 0)
    {
        result = result + "I";
        pInt = pInt - 1;
    }

    cout << "Roman Numeral: " << result << endl;
    return 0;
}
