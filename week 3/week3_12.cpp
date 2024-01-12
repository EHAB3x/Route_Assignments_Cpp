#include <iostream>
using namespace std;

int main() {
    int array_size;
    cin >> array_size;
    int array_one[array_size], array_two[array_size];

    for (int i = 0; i < array_size; i++)
    {
        cin >> array_one[i];
    }
    
    for (int x = 0; x < array_size; x++)
    {
        array_two[x] = array_one[x];
    }

    cout << "Array 1 : ";
    for (int j = 0; j < array_size; j++)
    {
        cout<< array_one[j]<< " ";
    }

    cout << endl;
    
    cout << "Array 2 : ";
    for (int k = 0; k < array_size; k++)
    {
        cout<< array_two[k]<< " ";
    }
    
    return 0;
}
