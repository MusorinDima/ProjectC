#include <iostream>
using namespace std;



float sign(float x, int e=0,string s=""){
    int result = x + e;
    if (x > 0){
        result = 1;
    }

    if(x < 0){
        result = -1;
    }
    return result;
}
int main(){
    float x;
    cin >> x;
    sign(x);
    cout << sign(x);


}