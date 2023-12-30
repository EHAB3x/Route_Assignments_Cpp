#include <iostream>

using namespace std;

int main(){
    int base , exponent , res = 1;
    cin >> base >> exponent;
    for (int i = 0; i < exponent; i++)
    {
        res *= base ;
    }
     cout << res << endl;
}