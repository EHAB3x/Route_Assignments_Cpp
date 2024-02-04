#include <iostream>
#include <string>
using namespace std;

int calc_words(string sentence){
    int spaces=1;
    for (int i = 0; i < sentence.size(); i++)
    {
        if(sentence[i] == ' ') spaces++;
    }
    return spaces;
}

int main(){
    string paragraph;
    getline(cin, paragraph,'.');
    int res = calc_words(paragraph);
    cout << "Total Number of Words: " << res << endl;
    return 0;
}