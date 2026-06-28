#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter the number of rows:";
    cin >> number;

    // Outer loop for row counting from 1 to number
    for(int i = 1; i <= number; i++){

        // Inner loop prints consecutive numbers from 1 to current row number
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        
        // Moves to the next row
        cout << endl;
    }

    return 0;

}