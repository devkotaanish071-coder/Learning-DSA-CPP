#include<iostream>
using namespace std;
int main(){

    int year;
    cout << "Enter a year to check leap year or not:";
    cin >> year;  //Taking a year input from user.
    
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){ //Checking if year is leap year or not
        cout << year << " is a leap year."; //if yes according to the condition print leap year
    }else{
        cout << year << " is not a leap year."; //Otherwise print not a leap year.
    }
    return 0;
}