#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter a number:";
    cin >> number;

    // Upper part
    for(int i = 1; i <= number; i++){

        // Print spaces to center the upper stars
        for(int j = 1; j <= number-i; j++){
            cout << " ";
        }

        // Print an odd number of starts
        for(int j = 1; j <= 2*i-1; j++){
            cout << "*";
        }

        // Print trailing space to balance the line structure
        for(int j = 1; j <= number-i; j++){
            cout << " ";
        }
        cout<<endl;
    }

    // Lower part
    // Count downwards from number to 1 to avoid duplicating the middle row
    for(int i = number - 1; i >= 1; i--){

        // Prints increasing leading spaces as the rows shrink downward
        for(int j = number; j > i; j--){
            cout << " ";
        }

        // Prints a decreasing odd number of stars for the lower rows
        for(int j = 1; j <= 2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}