#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    for (int i = 1; i <= number ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == number)
            {
                cout << "* ";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    } 
    return 0;
}