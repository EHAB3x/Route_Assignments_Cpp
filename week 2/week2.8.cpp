#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    cin >> num;
    string check = num % 2 == 0 ? "Even" : "Odd";
    cout << check << endl;
}