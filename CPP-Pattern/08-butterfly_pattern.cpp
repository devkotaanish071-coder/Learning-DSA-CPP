#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter number: ";
    cin >> number;

    // Upper part where stars grow outwards
    for(int i = 1; i <= number; i++){

        // Left wing stars incremented one by one
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // Middle blank spaces
        for(int j = 1; j <= 2 * (number - i); j++){
            cout << " ";
        }

        // Right wings stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Lower part where stars shrink inwards
    for(int i = number - 1; i >= 1; i--){

        // Left wing decreases row by row
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // Middle blank spaces
        for(int j = 1; j <= 2 * (number - i); j++){
            cout << " ";
        }

        // Right wings star
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}