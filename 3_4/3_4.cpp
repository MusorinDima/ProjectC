#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string line;
    ifstream file("..\\3_4\\3_4txt");

    if(!file.is_open()){
        cout << "file not open";

    }
    else{
            while (!file.eof()){
                getline(file,line);
                for (int i = 0; i < line.length(); i++) {
                   if (isdigit(line[i])){
                       cout << line[i];
                   }
                }
                cout << endl;
                }

                }


    file.close();
}