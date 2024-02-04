#include <iostream>
using namespace std;

void min_and_max(){
    int nums, min= INT_MAX, max= INT_MIN;
    cout << "Please Enter Number of Elements" << endl;
    cin >> nums;
    int arr[nums];
    if (nums < 2)
    {
        cout << "Please Enter At Least 2 Elements"<< endl;
    }else{
        for (int i = 0; i < nums; i++){
            cin >> arr[i];
            if (arr[i] < min){
                min = arr[i];
            }
            if (arr[i] > max){
                max = arr[i];
            }
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main(){
    min_and_max();
    return 0;
}