#include<iostream>
using namespace std;
int main(){

    int number;
    cout << " Enter a number for Multiplication table:";
    cin >> number;  //Taking a number for it's multiply table.
    int count = 1; //Used for numbering like 5 * 1 , 5 * 2 ,etc.

    for(int i = number; i <= number * 10; i = i + number){
        //Assign i with user inputed number and i is less than equal to number * 10 and every time i is incremented by i + number
        cout << number << " * " << count << " = " << i << endl;
        count ++;
    }
    return 0;
}