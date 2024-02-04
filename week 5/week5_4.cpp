#include <iostream>
#include <string>
using namespace std;

char most_repeated(string word){
    char most_repeated_char;
    int max_count=0;
    for (int i = 0; i < word.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < word.size(); j++)
        {
            if (word[i] == word[j]) count++;
            if (count >  max_count)
            {
                max_count = count;
                most_repeated_char = word[i];
            }
        } 
    }
    return most_repeated_char;
}

int main(){
    string word;
    cin >> word;
    char res = most_repeated(word);
    cout << res << endl;
    return 0;
}