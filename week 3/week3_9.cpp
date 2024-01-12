#include <iostream>
using namespace std;

int main() {
    int array_size,even_count=0,odd_count=0;
    cin >> array_size;
    int arr[array_size];

    for (int j = 0; j < array_size; j++)
    {
        cin >> arr[j];
    }
    for (int i = 0; i < array_size; i++)
    {
        if(arr[i] % 2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    cout << "Total even elements: " << even_count <<endl;
    cout << "Total odd elements: " << odd_count <<endl;
    return 0;
}
