#include <iostream>
using namespace std;

int main(){
    int number,max=0,secMax;
    for (int i = 0 ;i < 10 ; i ++)
    {
        cin >> number;
        if (number > max)
        {
            secMax = max;
            max = number;
        }
        if(number > secMax){
            if (number == max)
            {
                continue;
            }
            secMax = number;
        }      
    }
    cout << secMax << endl;
    
    return 0;
}