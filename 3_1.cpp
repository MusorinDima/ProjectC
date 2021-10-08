#include <iostream>
#include <cmath>
using namespace std;
 int main(){
     double S, p, n;
     cout << "Vvedi S: " << endl;
     cin >> S;
     cout << "Vvedi p: " << endl;
     cin >> p;
     cout << "Vvedi n: " << endl;
     cin >> n;
    cout <<"m = " << (S * (p / 100) * pow((1 + (p / 100)), n)) /  (12 * (pow((1 + (p / 100)),n) - 1));
 }