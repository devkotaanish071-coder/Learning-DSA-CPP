#include<iostream> //Used for input output operations
using namespace std;
int main(){

    int number1, number2, number3;   // Taking three number
    cout << "Enter first number:";   //input from user
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    cout << "Enter third number:";
    cin >> number3;

    if((number1 > number2) && (number1 > number3)){    //Checking if number 1 is greator than number 2 and 3.
        cout << number1 << " is the largest number";
    }else if((number2 > number1) && (number2 > number3)){ //not then is number 2 greator than number 1 and 2.
        cout << number2 << " is the largest number";
    }else{
        cout << number3 << " is the largest number"; //If both number 1 and 2 are not then obviously number 3 is greator.
    }
    return 0;
}