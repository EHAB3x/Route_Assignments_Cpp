#include <iostream>
using namespace std;


void avg(){
    int num, avg;
    for (int i = 0; i < 3; i++){
        cin >> num;
        avg += num;
    }
    cout << avg / 3.0 << endl;
}

int main(){
    avg();
    return 0;
}