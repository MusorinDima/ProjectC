#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string line;


    ifstream file("..\\3_3\\3_3txt.txt");

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
