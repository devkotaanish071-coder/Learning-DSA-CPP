#include<iostream>
#include<string.h>
using namespace std;

void pos(string name,int n){
    if (n<=0){
        return;
    }
    cout << name << endl;
    pos(name,n-1);
}

int main(){
    string name;
    cout << "Enter your name:";
    getline(cin,name);
    int n;
    cout << "Enter number of times to print:";
    cin >> n;
    pos(name,n);
    return 0;
}