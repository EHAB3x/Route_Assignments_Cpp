#include <iostream>
#include <string>
using namespace std;

void remove_after(string& sentence){
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == '#'){
            sentence.erase(i);
        } 
    }   
}

int main(){
    string paragraph;
    cin >> paragraph;
    remove_after(paragraph);
    cout << paragraph << endl;
    return 0;
}