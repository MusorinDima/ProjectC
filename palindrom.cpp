#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int x) {
    string num = to_string(x);
    string rev_num = num;
    reverse(rev_num.begin(), rev_num.end());

    if (num == rev_num){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin >>n;

    if(isPalindrome(n)) {
        cout <<n <<" is a palindrome";
    }
    else {
        cout << n <<" is NOT a palindrome";
    }
    return 0;
}
