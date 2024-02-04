#include <iostream>
#include <math.h>
using namespace std;

void circle(){
    float radius;
    cin >> radius;
    float diameter = radius * 2;
    cout << "Diameter = " << diameter << " units" << endl;
    float circumference = M_PI * diameter;
    cout << "Circumference = " << circumference << " units" << endl;
    float area = M_PI * radius * radius;
    cout << "Area = " << area << " sq.units" << endl;
}

int main(){
    circle();
    return 0;
}