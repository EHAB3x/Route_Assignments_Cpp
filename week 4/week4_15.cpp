#include <iostream>
using namespace std;

void cube(){
    int num , cube=1;
    cin >> num;
    for (int i = 0; i < 3; i++)
    {
        cube *= num;
    }
    cout << "Cube Of " << num << " = " << cube << endl;
}

int main(){
    cube();
    return 0;
}