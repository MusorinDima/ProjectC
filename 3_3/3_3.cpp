#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string line;


    ifstream file("C:\\Users\\dimam\\CLionProjects\\ProjectC++\\3_3\\3_3txt");

    if(!file.is_open()){
        cout << "file not open";

    }
    else{
        while (!file.eof()){
            getline(file,line);
            cout << line << endl;

        }
    }
    file.close();
}
