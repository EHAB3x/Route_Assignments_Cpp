#include <iostream>
using namespace std;

int main(){
    float number_one, number_two, number_three, avg;
    cout << "Please enter first number" << endl;
    cin >> number_one;
    cout << "Please enter second number" << endl;
    cin >> number_two;
    cout << "Please enter third number" << endl;
    cin >> number_three;
    avg = (number_one + number_two + number_three) / 3;
    cout << "The average = " << avg<< endl ;
    return 0;
}