#include<iostream>
#include<string>
using namespace std;

void print_name(string name){
    cout << name << endl;
}

int main(){
    string name;
    cout << "Enter your name:";
    getline(cin,name);
    print_name(name);
    return 0;
}