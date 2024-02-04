#include <iostream>
using namespace std;

int main(){
    int size,sum=0;
    cout << "Enter Size" << endl;
    cin >> size;
    int matrix[size][size];

    cout << "Enter The Matrix" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];   
        }
    }

    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int j = 0; j < size; j++)
        {
            sum += matrix[i][j];   
        }
        cout <<"Sum Of row " << i +1 << " = " << sum << endl;
    }
    
    return 0;
}