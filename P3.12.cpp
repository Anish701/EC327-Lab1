#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    string shape;

    cout << "Draw a Quadrilateral by Sequentially Entering Points which connect to each other with lines" << endl;
    cout << "Please Enter First Coordinate" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;

    cout << "This point connects to the Second Coordinate" << endl;
    cout << "Please Enter Second Coordinate" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    cout << "This point connects to the Third Coordinate" << endl;
    cout << "Please Enter Third Coordinate" << endl;
    cout << "x3: ";
    cin >> x3;
    cout << "y3: ";
    cin >> y3;

    cout << "This point connects to the Fourth Coordinate" << endl;
    cout << "Please Enter Fourth Coordinate" << endl;
    cout << "x4: ";
    cin >> x4;
    cout << "y4: ";
    cin >> y4;

    // 4 side lengths
    double length1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double length2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double length3 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
    double length4 = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
    // 2 diagonal lengths
    double diag1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double diag2 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));

    if ((length1 == length3 && length2 != length4) || (length1 != length3 && length2 == length4))
    {
        shape = "Trapezoid";
    }
    else if (length1 == length3 && length2 == length4 && length1 != length2)
    {
        shape = "Rectangle";
    }
    else if (length1 == length2 && length2 == length3 && length3 == length4)
    {
        if (diag1 == diag2)
        {
            shape = "Square";
        }
        else
        {
            shape = "Rhombus";
        }
    }
    else
    {
        shape = "None of these shapes";
    }

    cout << endl;
    cout << "Is this shape a square, a rectangle, a trapezoid, a rhombus, or none of these?" << endl;
    cout << "It is a " << shape << endl;
    cout << endl;
    return 0;
}