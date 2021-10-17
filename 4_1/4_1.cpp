#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int massiv[10];
    string line;
    ofstream file("C:\\Users\\kmusorin\\CLionProjects\\ProjectC\\4_1\\4_1txt");



    for (int i = 0; i < 10; i++) {
//        cout << massiv[i] << " ";
        file << i << endl;
    }
    file.close();
    ifstream fin("C:\\Users\\kmusorin\\CLionProjects\\ProjectC\\4_1\\4_1txt");
    int sum;
    string s;

    while (fin) {
        fin >> s;


        sum += stoi(s);
        cout << sum << endl;}
        //sum += atoi(line);









}