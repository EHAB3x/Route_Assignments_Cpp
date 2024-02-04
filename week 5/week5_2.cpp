#include <iostream>
using namespace std;

int print_sum(int size, int arr[]){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main(){
    int array_size;
    cout<<"Enter Array Size"<<endl;
    cin >> array_size;
    int array[array_size];
    for (int i = 0; i < array_size; i++)
    {
        cin >> array[i];
    }
    cout << print_sum(array_size, array);
}