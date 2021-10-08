//
// Created by dimam on 18.09.2021.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(0, "");
    bool lampa, Shtori, Ylica;
    cout << " Lampa vkl? 1 - yes , 0 - no" << endl;
    cin >> lampa;
    cout << " Shtori otkriti? 1 - yes , 0 - no " << endl;
    cin >> Shtori;
    cout << " Na ylitse den`? 1 - yes, 0 - no " << endl;
    cin >> Ylica;
    if (lampa == 1) {
        cout << " V komnate svetlo " << endl;
    }
    else if (Shtori and Ylica == 1) {
        cout << " V komnate svetlo " << endl;
    }
    else {
        cout << " V komnate temno " << endl;
    }
    system("pause");
    return 0;
};