#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main(){
map <string , int> rim_num = {
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000}
};

string num;
cin >> num;
    bool isNegative = false;

    for (int i = 0; i < num.length(); i++) {

        string s = num.substr(i, 1);

        if (s == "-") {
            isNegative = true;
        } else {
            int value = rim_num.find(s)->second;

            if (isNegative) {
                value = value * -1;
                isNegative = false;

            }
            cout << value << " ";
        }
    }
}
