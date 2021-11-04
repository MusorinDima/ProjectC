#include <iostream>
#include <cmath>

using namespace std;

int found_z(double array[]){
    double pokasatel = (array[2] - array[1]);
if (pokasatel <= 0){
    cout << "Ne opredelen";
}
else{
        cout << "z = " << log((array[2] - array[1])) * pow((array[2] - array[0]), 0.5);

}
 }
int main(){
    double x,y,b;
    cout << "Vvedi x" << endl;
    cin >> x;
    cout << "Vvedi y" << endl;
    cin >> y;
    cout << "Vvedi b" << endl;
    cin >> b;
    double i[3] ={x,y,b};
    found_z(i);
}