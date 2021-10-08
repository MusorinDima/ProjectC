#include <iostream>
#include <cmath>

using namespace std;
int main()

{

    double h, R, r, l, S, pi, V;
    pi = 3.14;
    cout << " Vvedi h " << endl;
    cin >> h;
    cout << " Vvedi R " << endl;
    cin >> R;
    cout << " Vvedi r " << endl;
    cin >> r;


    l = pow((pow(h,2) + pow((R - r),2)), 0.5);
    V = 0.333 * pi * h * (pow(R, 2) + R * r + pow(r, 2));
    S = pi * (pow(R, 2) + (R + r) * l + pow(r, 2));
    cout << " V = " << V << endl;
    cout << " S = " << S << endl;
    return 0;

}