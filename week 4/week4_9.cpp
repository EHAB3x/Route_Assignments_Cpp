#include <iostream>
using namespace std;

int main(){
    int size;
    bool is_symmetric = true;
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

    //check if the matrix is symmetric
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(matrix[i][j] != matrix[j][i]){
                is_symmetric = false;
                break;
            }
        }
    }

    if(is_symmetric){
        cout <<"Given matrix is a symmetric matrix."<<endl;
    }else{
        cout <<"Given matrix isn't a symmetric matrix."<<endl;
    }
    return 0;
}