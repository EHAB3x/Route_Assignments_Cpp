#include <iostream>
using namespace std;

int main(){
    int number, max = 0;
    for ( ; ;)
    {
        cin >> number;
        if (number < 0)
        {
            break;
        }
        if(number > max){
            max = number;
        }
    }
    cout << max << endl;
    
    return 0;
}