#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int massiv[10];
    string line;
    ofstream file("C:\\Users\\dimam\\CLionProjects\\ProjectC++\\4_1\\4_1txt");
   // for (int i = 0; i < 10; i++) {
        //i >> massiv[i];
        //cout << "Vvedi chislo " << i << ":" << endl;
        //cin >> massiv[i];

    //}
    for (int i = 0; i < 10; i++) {
//        cout << massiv[i] << " ";
        file << i << endl;
    }
    file.close();
    ifstream fin("C:\\Users\\dimam\\CLionProjects\\ProjectC++\\4_1\\4_1txt");
    int sum;
    string s;

    while (!fin.eof()) {
        getline(fin, line);


        sum += stoi(line);
        cout << line << " " << sum << endl;}
        //sum += atoi(line);








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
}