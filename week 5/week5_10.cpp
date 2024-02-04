#include <iostream>
#include <string>
using namespace std;

void even_and_odd_numbers(int num){
    cout << "Even Numbers Between 1 to " << num <<": ";
    for (int i = 1; i <= num; i++)
    {
        if (i%2 ==0)
        {
            cout << i << ", ";
        }    
    }
    cout << endl;
    cout << "Odd Numbers Between 1 to " << num <<": ";
    for (int i = 1; i <= num; i++)
    {
        if (i%2 ==1)
        {
            cout << i << ", ";
        }    
    }
}

int main(){
    int number;
    cin >> number;
    even_and_odd_numbers(number);
    return 0;
}