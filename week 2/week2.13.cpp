#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    for (int i = 1; i <= 12; i++){
        cout << i << " * " << number << " = " << i*number << endl;
    }
}