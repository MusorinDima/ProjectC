//Распечатать 10 последовательных натуральных чисел в возрастающем порядке, начиная с произвольного числа N
#include <iostream>
using namespace std;

int main(){
    int N, count;
    cout << "Vvedi N:" << endl;
    cin >> N;
    while (count < 10){
        cout << ++N << endl;
        count++;
    }
}