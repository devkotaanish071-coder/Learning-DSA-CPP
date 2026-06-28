#include<iostream>
using namespace std;

int sum_of_n_number(int num){
    if(num <= 0){
        return 0;
    }
    return num + sum_of_n_number(num-1);
}

int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    int sum = sum_of_n_number(num);
    cout << "Sum of 1 to " << num << " is " << sum;
    return 0;
}