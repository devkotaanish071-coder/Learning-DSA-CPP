#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    string word;
    cout << "Enter a word:";
    getline(cin,word);

    map<char, int> mpp;
    for(int i = 0; i < word.size(); i++){
        mpp[word[i]] ++;
    }

    int search;
    cout << "Enter the number of time you want to search:";
    cin >> search;
    while(search--){
        char alphabet;
        cout << "Enter a character:";
        cin >> alphabet;
        cout << mpp[alphabet] << endl;
    }

    return 0;

}