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
        if (sum  == arr[i])
        {
            continue;
        }else{
            sum += arr[i];
        }
    }
    cout << sum << endl;
    return 0;
}