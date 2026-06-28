#include<iostream>
using namespace std;

void print_1_to_n(int num){
    if(num <= 0){
        return;
    }
    print_1_to_n(num-1);
    cout << num << endl;
}

int main(){
     int num;
     cout << "Enter a number:";
     cin >> num;
     print_1_to_n(num);
     return 0;
}