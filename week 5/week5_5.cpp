#include <iostream>
#include <string>
using namespace std;

string lower(string word){
    for (int i = 0; i < word.size(); i++)
    {
        word[i] = tolower(word[i]);
    }  
    return word;
}

int main(){
    string word;
    cin >> word;
    string res = lower(word);
    cout << res << endl;
    return 0;
}