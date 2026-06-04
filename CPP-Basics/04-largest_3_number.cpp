#include<iostream>
using namespace std;
int main(){

    int number1, number2, number3;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    cout << "Enter third number:";
    cin >> number3;

    if((number1 > number2) && (number1 > number3)){
        cout << number1 << " is the largest number";
    }else if((number2 > number1) && (number2 > number3)){
        cout << number2 << " is the largest number";
    }else{
        cout << number3 << " is sthe largest number";
    }
    return 0;
}