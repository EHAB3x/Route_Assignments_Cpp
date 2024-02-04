#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter Size" << endl;
    cin >> size;
    int arr_1[size][size],arr_2[size][size],sum[size][size];

    cout << "Enter First Matrix" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr_1[i][j];   
        }
    }

    cout << "Enter Second Matrix" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr_2[i][j];   
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum[i][j]= arr_1[i][j] + arr_2[i][j];   
        }
    }

    cout << "Sum Of Two Matrixes" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<< sum[i][j] << " ";   
        }
        cout<<endl;
    }
    
    return 0;
}