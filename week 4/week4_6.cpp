#include <iostream>

using namespace std;

int main(){
    int size ,sum = 0,position;
    cout << "Enter The Size Of The Array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter The Position" << endl;
    cin >> position;

    for (int j = position - 1; j < size; j++)
    {
        arr[j] = arr[j + 1];
    }
    size -=1;
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}