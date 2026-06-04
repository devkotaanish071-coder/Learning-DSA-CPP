#include<iostream>
using namespace std;
int main(){

    int number;
    cout << " Enter a number for Multiplication table:";
    cin >> number;

    for(int i = number; i <= number*10; i = i+number){
        cout << i << endl;
    }
    return 0;
}