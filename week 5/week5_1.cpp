#include <iostream>
using namespace std;
void print_array(int size, int arr[]){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
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
    
    print_array(array_size, array);
}