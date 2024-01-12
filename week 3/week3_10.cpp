#include <iostream>
using namespace std;

int main() {
    int element, array_size;
    cin >> array_size;
    int arr[array_size];

    for (int j = 0; j < array_size; j++)
    {
        cin >> arr[j];
    }
    cout << "Please Enter The Number U want 2 Search:" << endl;
    cin >> element;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element Found at Index : " << i << endl;
        }
        
    }
    
    return 0;
}
