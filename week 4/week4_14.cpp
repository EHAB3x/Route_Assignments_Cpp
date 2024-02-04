#include <iostream>
using namespace std;

void is_prime(){
    int number ,count = 0;
    cin >> number;

    for (int i = 1; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    
    if (count > 1)
    {
        cout << "False" << endl;
    }else{
        cout << "True" << endl;
    } 
}

int main(){
    is_prime();
    return 0;
}