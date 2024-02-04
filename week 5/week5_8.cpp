#include <iostream>
#include <string>
using namespace std;

int max_int(int num){
    int max=INT_MIN;
    while (num > 0)
    {
        int digit = num % 10;
        if(digit > max){
            max = digit;
        }
        num /= 10;
    }
    return max;
}

int main(){
    int number;
    cin >> number;
    int res = max_int(number);
    cout << res << endl;
    return 0;
}