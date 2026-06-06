#include<iostream>
using namespace std;
int main(){
    int score = 100;
    int *scoreptr = &score;
    *scoreptr = 200;
    cout << *scoreptr;
    return 0;
}