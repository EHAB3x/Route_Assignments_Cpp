#include <iostream>
using namespace std;

int main() {
    int rows;
    cin >> rows;

    // upper part
    for (int i = 1; i <= rows; i++)
    {
        //spaces
        for (int  j = rows - i; j > 0; j--)
        {
            cout << " ";
        }
        //stars
        for (int k = 1; k <=  (2* i) - 1; k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    // down part
    for (int  x = rows; x > 0; x--)
    {
        //spaces
        for (int i = 0; i < rows - x; i++)
        {
            cout << " ";
        }
        
        //stars
        for (int w = (2 * x) - 1; w > 0; w--)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    
    
    return 0;
}
