#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int first;
    int second;

    cout << "Please enter the first time: ";
    cin >> first;
    int minutes1 = first % 100;
    int hours1 = first / 100;
    cout << "Please enter the second time: ";
    cin >> second;
    int minutes2 = second % 100;
    int hours2 = second / 100;

    int diffMins;
    if (second >= first)
    {
        diffMins = (hours2 * 60 + minutes2) - (hours1 * 60 + minutes1);
    }
    else
    {
        diffMins = (hours1 * 60 + minutes1) - (hours2 * 60 + minutes2);
        diffMins = 1440 - diffMins;
    }

    int diffHours = diffMins / 60;
    diffMins = diffMins % 60;
    cout << diffHours << " hours " << diffMins << " minutes" << endl;
    return 0;
}