#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter number of rows:";
    cin >> number;

    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= number-i; j++){
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++){
            cout << "*";
        }
        for(int j = 1; j <= number-i; j++){
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}