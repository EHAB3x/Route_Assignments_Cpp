#include <iostream>
#include <string>

using namespace std;

string check(string word){
    string result = "True";
    for (char i = 'a'; i <= 'z' ; i++)
    {
        for (int j = 0; j < word.size(); j++)
        {
            if (word[j] == i ){
                    result = "False";
                    break;
            }
        }
    }
   return result;
}
int main(){
    string word;
    cin >> word;

    string res = check(word);

    cout << res << endl;
    
    
    return 1000;
}