#include<iostream>   //Used for input and output operations
using namespace std;
int main(){

    //Taking a long int data type so can it can hold the factorial of big numbers
    long int fact = 1;  
    int number;
    cout << "Enter a number for Factorial:";
    cin >> number;  //Taking a number input from user

    for(int i = 1; i <= number; i++){ //Factorial means a number multiplying by itself until 1
        //Here we start from 1 and the 1 increases to the number and everytime the number is multiplyed
        fact = fact * i;  
    }

    cout << fact << " is the factorial of " << number ;
    return 0; 
}