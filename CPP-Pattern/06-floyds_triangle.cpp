#include<iostream>
using namespace std;
int main(){

    int number;
    int num = 1;  // Counter used to print sequential number
    cout << "Enter a number:";
    cin >> number;

    // Outer loop controlling row counting from 1 to number.
    for(int i = 1; i <= number; i++){

        // Inner loop running for columns running i times for current row
        for(int j = 1; j<= i; j++){
            cout << num << " " ; // Prints the current sequence number
            num++;  // Increments the counter to the next number is unique
        }

        // Moves to the next line
        cout << endl;
    }
    return 0;
}