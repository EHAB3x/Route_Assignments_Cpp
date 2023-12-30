#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    int arr[32];
    int index= 0;
    while (number > 0)
    {
        arr[index] = number % 2 ;
        number /= 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}
