#include <iostream>
using namespace std;

int main(){
    int width, height;
    cout << "Please enter width" << endl;
    cin >> width;
    cout << "Please enter height" << endl;
    cin >> height;
    int area = width * height;
    int perimeter =(width + height) * 2;

    cout << "The perimeter = " << perimeter << endl ;
    cout << "The area = " << area << endl ;
    return 0;
}