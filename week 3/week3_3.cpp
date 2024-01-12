#include <iostream>
using namespace std;

int main(){
    int number,steps = 0;
    cin >> number;
    while ( number > 0)
    {
        if (number % 2 == 0)
        {
            number /= 2;
            steps++;
        }else{
            number -= 1;
            steps++;
        }
    }
    cout << steps << endl;
    
    return 0;
}