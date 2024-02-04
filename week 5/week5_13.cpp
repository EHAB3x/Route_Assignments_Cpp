#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main(){
    int number;
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is palindrome." << endl;
    } else {
        cout << number << " is not palindrome." << endl;
    }
    
    
    return 0;
}