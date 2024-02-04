#include <iostream>
#include <string>
using namespace std;

void upperCase(string& sentence) {
    for (int i = 0; i < sentence.size(); i++)
    {
        sentence[i] = toupper(sentence[i]);
    }  
}

int main(){
    string paragraph;
    getline(cin, paragraph);
    upperCase(paragraph);
    cout << paragraph << endl;
    return 0;
}