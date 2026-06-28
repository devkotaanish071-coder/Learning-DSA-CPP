#include<iostream>
#include<string>
using namespace std;

int main(){

    //Taking String inut from user
    string ap;
    cout << "Enter a string:";
    getline(cin,ap);      //getline is used to take input after space

    //Declaring hash with 256 so that it includes all 256 Ascii values
    int hash[256] = {0};
    for(int i = 0; i < ap.size(); i++){
        hash[ap[i]] ++;      //Everytime the i is added +1 to the hash at given ascii range
    }

    //Asking total number of searches
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