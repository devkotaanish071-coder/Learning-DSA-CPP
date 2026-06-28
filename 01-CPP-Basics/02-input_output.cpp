#include<iostream>   //Used for input and output in C++
#include<string>  //Used for getline function
using namespace std;

int main(){

    string name;
    cout << "Enter your name:"; //Takng Name input from user
    getline(cin,name); //Takes input after space also

    int age;
    cout << "Enter your age:"; //Taking age input from user
    cin >> age;

    cout << "Your name is " << name << endl;
    cout << "You are " << age << " yeras old" << endl;
    return 0;
}