#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

bool is_palindrome(int i, string word){
    if(i == word.length()/2){
        return true;
    }
    if(word[i] != word[word.length()-i-1]){
        return false;
    }
    return is_palindrome(i+1, word);
}

int main(){
    string name;
    string word = "";
    cout << "Enter a sentence for checking palindrome:";
    getline(cin,name);

    //Making the Input to lower case
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    //Using Loop to store only alphabets
    for(int i = 0; i < name.length(); i++){
        char ab = name[i];
        //Making sure the variable word only hold alphabets
        if(ab >= 97 && ab <= 122){
            word += ab;
        }
    }

    //Function calling
    bool palindrome = is_palindrome(0,word);

    if(palindrome){
        cout << word << " is palindrome." << endl;
    }else{
        cout << word << " isn't palindrome." << endl;
    }
    return 0;
}