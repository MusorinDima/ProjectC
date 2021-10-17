#include <iostream>
#include <fstream>
using namespace std;

int main() {


    string line;
    ofstream file("C:\\Users\\dimam\\CLionProjects\\ProjectC++\\4_1\\4_1txt");


    for (int i = 0; i < 10; i++) {

        file << i << " ";

    }

    file.close();
    ifstream fin("C:\\Users\\dimam\\CLionProjects\\ProjectC++\\4_1\\4_1txt");
    //cout << fin;
    int sum(0);
    string s;


        getline(fin,line);

        s = line.substr(0,line.find(" "));


        sum += stoi(s);
        cout << sum << endl;

}







//
//    int ch = 0;
//    string line;
//    for (int i = 1; i < 11; i++) {
//        file << ch;
//    }
//    file.close();
//    ifstream f("4_1txt");
//    getline(f,line);
//    cout << line;
