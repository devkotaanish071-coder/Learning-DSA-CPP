#include<iostream>
using namespace std;
int main(){

    long int fact = 1;
    int number;
    cout << "Enter a number for Factorial:";
    cin >> number;
    for(int i = 1; i <= number; i++){
        fact = fact * i;
    }
    cout << fact << " is the factorial of " << number ;
    return 0; 
}