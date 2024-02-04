#include <iostream>
#include <string>
using namespace std;

void vowels_and_consonants (string paragraph, int& vowels, int& consonants){
    for (int i = 0; i < paragraph.size(); i++){
        paragraph[i] = tolower(paragraph[i]);
        if(paragraph[i] == ' ') continue;
        else if(paragraph[i] == 'a' || paragraph[i] == 'e' || paragraph[i] == 'i' || paragraph[i] == 'o' || paragraph[i] == 'u') vowels++;
        else consonants++;
    }
    
}

int main(){
    int vowels = 0, consonants = 0;
    string  sentence;

    getline(cin, sentence);

    vowels_and_consonants(sentence, vowels, consonants);
    
    cout <<"Total Vowels = " << vowels << endl;
    cout <<"Total Consonants = " << consonants << endl;
    return 0;
}