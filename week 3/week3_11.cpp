#include <iostream>
using namespace std;

int main() {
    int element, count=0, array_size;
    cin >> array_size;
    int arr[array_size];

    for (int j = 0; j < array_size; j++)
    {
        cin >> arr[j];
    }
    cout << "Please Enter The Number U want 2 Check Repeat For It:" << endl;
    cin >> element;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    cout << "Number of occurrences of "<< element << " : " << count << endl;
    
    return 0;
}
