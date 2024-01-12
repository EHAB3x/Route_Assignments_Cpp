#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int hours = number / 3600;
    number -= hours * 3600; 
    int minutes = number / 60;
    number -= minutes * 60; 
    int seconds = number;
    cout << "H:M:S - "<< hours << " : " << minutes << " : " << seconds <<endl;
    return 0;
}