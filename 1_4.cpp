//
// Created by dimam on 18.09.2021.
//
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c, d, x1, x2;
    cout << " ax^2 + bx + c = 0, Naiti x" << endl;
    cout << " Vvedi a: " << endl;
    cin >> a;
    cout << " Vvedi b: " << endl;
    cin >> b;
    cout << " Vvedi c: " << endl;
    cin >> c;
    if (a == 0) {
        x1 = (-c) / (b);
        cout << " x = " << x1;
    }
    else if (b == 0) {
        cout << " Nevozmozno " << endl;
        }
    else {
        d = (b * b) - (4 * a * c);
        if (d == 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            cout << " x = " << x1 << endl;
        }
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << " x1 = " << x1 << endl;
            cout << " x2 = " << x2 << endl;
        }
        if (d < 0)
        {
            cout << " Net kornei " << endl;
        }
    }
system("pause");
return 0;
}