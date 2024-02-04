#include <iostream>
#include <string>
using namespace std;

void print(int num){
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
}

int main(){
    int number;
    cin >> number;
    print(number);
    return 0;
}