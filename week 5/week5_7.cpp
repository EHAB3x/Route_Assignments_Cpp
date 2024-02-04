#include <iostream>
#include <string>
using namespace std;

void reverse(int num){
    while (num > 0)
    {
        cout << num %10;
        num /= 10;
    }
}

int main(){
    int number;
    cin >> number;
    reverse(number);
    return 0;
}