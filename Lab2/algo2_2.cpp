#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    double D = (B * B) - (4 * A * C);
    if (D >= 0)
    {
        double x1 = (-B + sqrt(D)) / 2 * A;
        double x2 = (-B - sqrt(D)) / 2 * A;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    else
    {
        cout << "No Real answer" << endl;
    }
}