#include <iostream>
#include <string>
using namespace std;

string reverse_string(string sentence){
    string reverse = sentence;
    for (int i = 0; i < sentence.size(); i++){
        reverse[i] = sentence[sentence.size() - 1 - i]; 
    }
    return reverse;
}

int main(){
    string paragraph;
    cin >> paragraph ;
    string res = reverse_string(paragraph);
    cout << "Reversed String: " << res << endl;
    return 0;
}