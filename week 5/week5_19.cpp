#include <iostream>
#include <string>
using namespace std;

void Capitalize(string& sentence){
    sentence[0] = toupper(sentence[0]);
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == ' '){
            sentence[i +1] = toupper(sentence[i + 1]);
        } 
    }   
}

int main(){
    string paragraph;
    getline(cin, paragraph);
    Capitalize(paragraph);
    cout << paragraph << endl;
    return 0;
}