#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        count = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
