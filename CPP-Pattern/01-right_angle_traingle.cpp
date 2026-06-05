#include<iostream>
using namespace std;
int main(){

    int row_number;
    cout << "Enter how many rows of triangle you want to print:";
    cin >> row_number;
    
    for(int i = 0; i < row_number; i++){
        for(int j = 0; j<= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}