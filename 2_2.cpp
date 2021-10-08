#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    double w, a, x;
    cout << "Vvedi a" << endl;
    cin >> a;
    cout << "Vvedi x " << endl;
    cin >> x;
    if (abs(x) < 1) {
//        if (x != 0) {
//            w = a * log(abs(x));
//            cout << "w = " << w << endl;
//        }
//        else{
//            cout << "ln (0) ne opredelen" << endl;
//        }
        cout << ((x == 0) ? "ln (0) ne opredelen" : to_string(a * log(abs(x)))); // тернарное условие
    }
    else{
        if (abs(x) >= 1) {

            w = pow((a - pow(x, 2)), 0.5);
            cout << "w =" << w << endl;
        }
        else {
            cout << "net reshenia" << endl;
        }
    }
    return 0;
}