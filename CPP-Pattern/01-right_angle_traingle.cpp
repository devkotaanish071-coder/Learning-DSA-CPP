#include<iostream>  // Used for input output functions
using namespace std;
int main(){

    int row_number;
    cout << "Enter how many rows of triangle you want to print:";
    cin >> row_number; // Taking input how many row they want
    
    // i is for Row and j are for Columns.
    for(int i = 0; i < row_number; i++){ 
        for(int j = 0; j <= i; j++){
            cout << "*";  // Printing * till condition meats.
        }
        cout << endl;
    }
    
    return 0;
}