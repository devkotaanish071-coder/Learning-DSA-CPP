#include<iostream>
using namespace std;
int main(){

    int row_number;
    cout << "Enter the number of rows:";
    cin >> row_number; // Taking Row input from user

    // Outer Loop controls the row counting from the number to 1
    for(int i = row_number; i >= 1; i--){

        // Inner loop prints i in that row
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        
        // Move to next line after completing the current row
        cout << endl;
    }
    
    return 0;
}