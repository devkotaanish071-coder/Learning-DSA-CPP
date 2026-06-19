#include<iostream>
using namespace std;

bool palindrome(int i,string &name){
    if(i >= name.size()/2){
        return true;
    }
    if(name[i] != name[name.size()-i-1]){
        return true;
    }
    return palindrome(i+1, name);
}


int main(){
    string name;
    cout << "Enter a word:";
    cin >> name;

    int length = name.length();

    int tru = palindrome(0,name);
    if(tru == 1){
        cout << name << " is palindrome";
    }else{
        cout << name << " isn't palindrome";
    }
    return 0;
}