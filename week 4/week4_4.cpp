#include <iostream>
using namespace std;

int main(){
    int size ,sum = 0;
    cout << "Enter Size Width" << endl;
    cin >> size;
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j){
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}