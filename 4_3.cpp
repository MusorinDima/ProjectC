#include <iostream>
using namespace std;
#include <math.h>

float count_square(string type, float a, float b = 0){
    float square;
    if (type == "rectangle"){
        square = a * b;
    }
    if (type == "triangle"){
        square = (a * b) / 2;
    }
    if (type == "circle"){
        square = M_PI * pow(a,2);
    }
    return square;
}


int main(){
    cout << count_square("rectangle", 4, 5) << endl;
    cout << count_square("triangle", 4, 5) << endl;
    cout << count_square("circle", 2) << endl;

}