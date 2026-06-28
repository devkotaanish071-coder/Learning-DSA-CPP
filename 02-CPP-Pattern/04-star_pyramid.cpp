#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter number of rows:";
    cin >> number;

    // Outer loop managing row counting from 1 to number
    for(int i = 1; i <= number; i++){

        // First Inner loop printing spaces to push the stars into a pyramid shape
        for(int j = 1; j <= number - i; j++){
            cout << " ";
        }
        
        // Second Inner loop printing odd number for each row
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }

        // Third Inner loop printing trailing spaces to balance out the row structure
        for(int j = 1; j <= number - i; j++){
            cout << " ";
        }

        // Moves to next line
        cout << endl;
    }
    
    return 0;
}