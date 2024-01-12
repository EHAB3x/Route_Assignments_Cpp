#include <iostream>
using namespace std;

int main(){
    int number,sum = 0;
    for ( ; ;)
    {
        cin >> number;
        if (number < 0)
        {
            break;
        }      
        sum += number;
    }
    cout << sum << endl;
    
    return 0;
}