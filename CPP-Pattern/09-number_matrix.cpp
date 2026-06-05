#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter number: ";
    cin >> number;

    int size = 2 * number - 1;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;
            int minDistance = min(min(top, bottom), min(left, right));
            cout << number - minDistance << " ";
        }
        cout << endl;
    }
    return 0;
}