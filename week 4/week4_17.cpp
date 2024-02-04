#include <iostream>
using namespace std;

void divisors(){
    int num;
    cin >> num;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main(){
    divisors();
    return 0;
}