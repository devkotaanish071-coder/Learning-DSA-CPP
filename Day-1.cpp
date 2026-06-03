#include <iostream>
using namespace std;
int main() {
    int number, temp, check;
    int arm = 0;
    cout << "Enter a number to check Armstrong or not: ";
    cin >> number;
    check = number;
    while (number != 0) {
        temp = number % 10;
        arm = arm + (temp * temp * temp);
        number = number / 10;
    }
    if (check == arm) {
        cout << check << " is an Armstrong Number." << endl;
    } else {
        cout << check << " is not an Armstrong Number." << endl;
    }
    return 0;
}