
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"");

    int fivezn;
    cout << "Vvedi 5 znachnoe chislo: ";
    cin >> fivezn;
    if(fivezn > 9999 and fivezn < 100000){
        cout << endl << "1: " << fivezn / 10000 << endl;
        cout << "2: " << (fivezn / 1000) % 10 << endl;
        cout << "3: " << (fivezn / 100) % 10 << endl;
        cout << "4: " << (fivezn / 10) % 10 << endl;
        cout << "5: " << fivezn % 10 << endl;
    }
    else{
        cout << "Vvedi 5 znachnoe chislo (10000 - 99999): ";
    }
    return 0;
}
