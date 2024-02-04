#include <iostream>
#include <string>
using namespace std;

string change_letter(string sentence){
    for (int i = 0; i < sentence.size(); i++){
        if(sentence[i] >= 'a' && sentence[i] <= 'z' || sentence[i] >= 'A' && sentence[i] <= 'Z'){
            if (sentence[i] == 'z')
            {
                sentence[i] = 'a';
            }else if(sentence[i] == 'Z'){
                sentence[i] = 'Z';
            }else{
                sentence[i] = sentence[i] + 1;
            }
            
        }
    }
    return sentence;
}

int main(){
    string paragraph;
    cin >> paragraph ;
    string res = change_letter(paragraph);
    cout << "Reversed String: " << res << endl;
    return 0;
}