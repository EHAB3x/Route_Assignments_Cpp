#include <iostream>
using namespace std;

int main() {
    int number, min_boundary, max_boundary, count, digit_sum = 0, total = 0;
    cin >> number >> min_boundary >> max_boundary;

    for (int i = 1; i <= number; i++)
    {
        int variable = i;
        digit_sum = 0;
        for (int j = variable; j > 0; j /=10)
        {
            int digit = j %10;
            digit_sum += digit;
        }
        
        if (digit_sum >= min_boundary && digit_sum <= max_boundary)
        {
            total += variable;
        }

    }
        cout << total << endl;

    
    return 0;
}
