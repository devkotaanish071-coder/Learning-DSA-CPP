#include<iostream>
using namespace std;
struct item{
    char id;
    int price;
};
int main(){

    //Creating Dynamic Variable
    item* currentItem = new item;
    currentItem -> id = 'A';
    currentItem -> price = 50;
    
    cout << currentItem-> id << endl << currentItem -> price;
    return 0;
} 
