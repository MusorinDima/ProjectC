#include <iostream>
using namespace std;

int main(){

    string stars1 =  " * * * * * * ";
    string stars2 = "  * * * * *  ";
    char line = 'z';
    for (int i = 1; i <= 13; i++) {
        if (i <= 6){
            string flag_part1 = i % 2 != 0 ? stars1 : stars2;
            string flag_part2 = string(45, line);
            cout << flag_part1 << flag_part2 << endl;
        }
        else{
            cout << string(58, line) << endl;
        }
    }
}