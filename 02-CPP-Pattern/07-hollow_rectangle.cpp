#include<iostream>
using namespace std;
int main(){
     
    int row,column;
    cout << "Enter row:";
    cin >> row;

    cout << "Enter columns:";
    cin >> column;

    // Outer loop iterating through 1 to row
    for(int i = 1; i <= row; i++){

        // Inner loop iterating through each columns
        for(int j = 1; j<= column; j++){

            // Logical conditions to identify boundary co-ordinates
            if(i == 1 || i == row || j == 1 || j == column){
                cout << "*";  // Print start on top bottom left right
            }
            else{
                cout << " "; // Print space to keep the inside of rectangle hollow
            }
        }
        // Moves to the next line
        cout << endl;
    }

    return 0;
}