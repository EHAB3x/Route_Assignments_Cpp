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
        arr[i] *= 2;
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}