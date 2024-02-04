#include <iostream>
#include <string>
using namespace std;

int factorial(int num){
    int fac= 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;   
}

int main(){
    int number;
    cin >> number;
    int res = factorial(number);
    cout << res << endl;
    return 0;
}