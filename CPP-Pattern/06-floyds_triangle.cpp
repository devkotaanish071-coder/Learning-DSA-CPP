#include<iostream>
using namespace std;
int main(){

    int number;
    int num = 1;
    cout << "Enter a number:";
    cin >> number;

    for(int i = 1; i <= number; i++){
        for(int j = 1; j<= i; j++){
            cout << num << " " ;
            num++;
        }
        cout << endl;
    }
    return 0;
}