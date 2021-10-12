#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    char massiv[30];
    for (int i = 1; i < 31; i++)
    {
        cout << "Vvedi simvl " << i << ":" << endl;
        cin >> massiv[i];
    }
    for (int i = 0; i < 30; i++) {
        if (massiv[i] > massiv[i + 1]){

            char temp = massiv[i + 1];
            massiv[i + 1] = massiv[i];
            massiv[i] = temp;
            i = -1;
        }
    }
    cout << massiv;
}

