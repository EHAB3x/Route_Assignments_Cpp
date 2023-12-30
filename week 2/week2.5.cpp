#include <iostream>

using namespace std;

int main(){
    int birth;
    cin >> birth;

    if (2024 - birth > 18)
    {
        cout << "Above 18" << endl;
    }else{
        cout << "Below 18" << endl;
    }
}