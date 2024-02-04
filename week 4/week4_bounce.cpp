#include <iostream>
using namespace std;

void diff(){
    int size,min=INT_MAX,max=INT_MIN;
    cout << "Enter Array Size" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int difference = max - min;
    cout << "Difference: " << difference << endl;
}

int main(){
    diff();
    return 0;
}