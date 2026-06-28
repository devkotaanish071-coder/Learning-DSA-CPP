#include<iostream>
using namespace std;

void print_n_to_1(int num){
    if(num <= 0){
        return;
    }
    cout << num << endl;
    print_n_to_1(num-1);
}

int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    print_n_to_1(num);
    return 0;
}