#include <iostream>

using namespace std;

int main(){
    int a, count = 0;
    for (int i = 0; i < 10; i++){
        cin >> a;
        if(a % 2 != 0){
             count +=1;
        }
    }
    cout << count <<endl;
}