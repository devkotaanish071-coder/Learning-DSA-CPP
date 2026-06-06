#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    string word = "Apple is good but samgoo is best";
    unordered_map<char,int> frequencyTable;

    for(auto ch: word){
        frequencyTable[ch]++;
    }

    for(const auto&[character, count]: frequencyTable){
        cout << character << " appers " << count << " times" << endl;
    }
    return 0;
}