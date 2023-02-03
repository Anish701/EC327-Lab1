#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double sEq()
{
    double s;
    double s0 = 3;
    double v0 = 3;
    double t = 3;
    double g = 3;
    s = s0 + v0 * t + (0.5) * g * pow(t, 2);
    return s;
}

double FVeq()
{
    double FV;
    double PV = 3;
    double INT = 3;
    double YRS = 3;
    FV = PV * pow((1 + (INT / 100)), YRS);
    return FV;
}

double Geq()
{
    double G;
    double pi = 3.14;
    double a = 3;
    double p = 3;
    double m1 = 3;
    double m2 = 3;
    G = 4 * pow(pi, 2) * pow(a, 3) / (pow(p, 2) * (m1 + m2));
    return G;
}

double cEq()
{
    double c;
    double a = 3;
    double b = 3;
    double Y = 3;
    c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(Y));
    return c;
}

int main()
{
    double s = sEq();
    double FV = FVeq();
    double G = Geq();
    double c = cEq();
    cout << "s = " << s << endl;
    cout << "FV = " << FV << endl;
    cout << "G = " << G << endl;
    cout << "c = " << c << endl;
    return 0;
}