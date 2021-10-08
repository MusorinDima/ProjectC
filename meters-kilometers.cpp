#include <iostream>

using namespace std;

int main(){

    float meters;
    cout << "Vvedite meters: " << endl;
    cin >> meters;
    cout << meters << " m = " << (meters / 1000) << " km";
}