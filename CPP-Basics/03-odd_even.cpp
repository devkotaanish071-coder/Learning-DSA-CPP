#include<iostream>
using namespace std;

int main(){

    int number;
    cout << "Enter a number to find out even or odd:";
    cin >> number; //Taking number from user.

    if(number % 2 == 0){ //Checking if the number is divisible by 2 or not
        cout << number << " is even number"; //If divisible print Even
    }else {
        cout << number << " is odd number"; //Otherwise print Odd. 
    }
    return 0;
}