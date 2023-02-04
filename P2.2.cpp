#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;

    cout << "Please Enter First Coordinate" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;

    cout << "Please Enter Second Coordinate" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    cout << "Please Enter Third Coordinate" << endl;
    cout << "x3: ";
    cin >> x3;
    cout << "y3: ";
    cin >> y3;

    double length1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double length2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double length3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    double cosAngle1 = (pow(length2, 2) + pow(length3, 2) - pow(length1, 2)) / (2 * length2 * length3);
    double angle1 = acos(cosAngle1) * (180.0 / 3.141592653589793238463);
    double cosAngle2 = (pow(length1, 2) + pow(length3, 2) - pow(length2, 2)) / (2 * length1 * length3);
    double angle2 = acos(cosAngle2) * (180.0 / 3.141592653589793238463);
    double cosAngle3 = (pow(length1, 2) + pow(length2, 2) - pow(length3, 2)) / (2 * length1 * length2);
    double angle3 = acos(cosAngle3) * (180.0 / 3.141592653589793238463);

    double perimeter = length1 + length2 + length3;

    double area = (0.5) * length1 * length2 * (sin(angle3 * (3.141592653589793238463 / 180.0)));

    // cout << "The lengths of this triangle are: " << length1 << ", " << length2 << ", " << length3 << endl;
    // cout << "The angles of this triangle are: " << angle1 << ", " << angle2 << ", " << angle3 << endl;
    // cout << "The perimeter of this triangle is: " << perimeter << endl;
    // cout << "The area of this triangle is: " << area << endl;
    cout << endl;
    cout << left << setw(25) << "Triangle Lengths: " << endl;
    cout << left << setw(25) << "Length 1: " << length1 << endl;
    cout << left << setw(25) << "Length 2: " << length2 << endl;
    cout << left << setw(25) << "Length 3: " << length3 << endl;
    cout << endl;

    cout << left << setw(20) << "Triangle Angles: " << endl;
    cout << left << setw(25) << "Angle 1: " << angle1 << endl;
    cout << left << setw(25) << "Angle 2: " << angle2 << endl;
    cout << left << setw(25) << "Angle 3: " << angle3 << endl;
    cout << endl;

    cout << left << setw(25) << "Perimeter: " << perimeter << endl;
    cout << endl;

    cout << left << setw(25) << "Area: " << area << endl;
    cout << endl;

    return 0;
}