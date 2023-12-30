#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    if (a > b && a > c){
        cout << "Max Element: " << a << endl;
    }else if (b > a && b > c){
        cout << "Max Element: " << b << endl;
    }else if (c > a && c > b){
        cout << "Max Element: " << c << endl;
    }

    if(a < b && a < c){
        cout << "Min Element: " << a << endl;
    }else if(b < a && b < c){
        cout << "Min Element: " << b << endl;
    }else if(c < a && c < b){
        cout << "Min Element: " << c << endl;
    }
}