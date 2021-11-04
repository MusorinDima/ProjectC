#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string line;
    ofstream file("..\\4_1\\4_1txt");


    for (int i = 0; i < 10; i++) {

        file << i << " ";

    }

    file.close();
    ifstream fin("..\\4_1\\4_1txt.txt");
    int sum(0);
    int start = 0;
    string s;


    getline(fin, line);
    int finish = line.find(' ');


    for (int i = 0; i < 10; i++) {

        s = line.substr(start, finish - start);
        start = finish + 1;
        finish = line.find(' ', start);
        sum += stoi(s);
    }
    cout << sum << endl;


}