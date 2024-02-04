#include <iostream>

using namespace std;

int main(){
    int size;
    cout << "Enter The Size Of The Array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] * -1;
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}