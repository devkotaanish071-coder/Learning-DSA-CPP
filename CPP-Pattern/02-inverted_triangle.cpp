#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter the number of rows:";
    cin >> number;

    for(int i = number; i >= 1; i--){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}