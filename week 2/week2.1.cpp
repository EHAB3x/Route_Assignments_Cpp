#include <iostream>

using namespace std;

int main(){
    int x ;
    cin >> x;
    if(x < 0){
        cout << "Negative" << endl;
    }else if(x == 0){
        cout << "Not Positive or Negative" << endl;
    }else{
        cout << "Positive" << endl;
    }
}