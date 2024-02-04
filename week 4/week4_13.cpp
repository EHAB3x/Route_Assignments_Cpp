#include <iostream>
using namespace std;

void even_or_odd(){
    int number;
    cin >> number;
    
    if (number % 2 == 0)
    {
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    } 
}

int main(){
    even_or_odd();
    return 0;
}