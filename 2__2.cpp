//
// Created by dimam on 30.10.2021.
//

#include <iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
    setlocale(0, "");
    float w, a, x;
    cout << "Vvedi a" << endl;
    cin >> a;
    cout << "Vvedi x" << endl;
    cin >> x;
    if (abs(x) < 1) {
        if (x != 0) {
            w = a * log(abs(x));
            cout << "w =" << w << endl;
        }
        else{
            cout << "ln (0) ne opredelen" << endl;
        }
    }
    else{
        if (a >=pow(x, 2)) {

            w = pow((a - pow(x, 2)), 0.5);
            cout << "w =" << w << endl;
        }
        else {
            cout << "Net resheniya" << endl;
        }
    }
    return 0;
}