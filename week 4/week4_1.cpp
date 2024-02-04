#include <iostream>
using namespace std;

int main(){
    int size ,sum = 0;
    cout << "Enter The Size Of The Array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
    
    
    return 0;
}