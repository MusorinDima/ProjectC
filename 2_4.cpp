//����������� 10 ���������������� ����������� ����� � ������������ �������, ������� � ������������� ����� N
#include <iostream>
using namespace std;

int main(){
    int N, count;
    cout << "Vvedi N:" << endl;
    cin >> N;
    while (count <= 9){
        if (N == 0){
            N++;
        }
        cout << N++ << endl;
        count++;

    }
}