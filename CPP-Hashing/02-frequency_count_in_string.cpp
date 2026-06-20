#include<iostream>
#include<string>
using namespace std;

int main(){

    string ap;
    cout << "Enter a string:";
    getline(cin,ap);

    int hash[256] = {0};
    for(int i = 0; i < ap.size(); i++){
        hash[ap[i]] ++;
    }

    int search;
    cout << "Enter the number of searches:";
    cin >> search;
    while(search--){
        char character;
        cout << "Enter the character to search:";
        cin >> character;
        cout << hash[character] << endl;
    }

    return 0;
}