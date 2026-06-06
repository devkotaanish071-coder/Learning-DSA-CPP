#include<iostream>
using namespace std;
struct item{
    char id;
    int price;
    item* next;
};
int main(){
    
    item* currentItem = new item;
    //Creating new dynamic variable
    item* futureItem = new item;
    
    currentItem -> id='A';
    currentItem -> price = 50;
    futureItem -> id ='B';
    futureItem -> price = 100;
    
    //Connecting Bridge currentItem next = futureItem
    currentItem -> next = futureItem;
    
    //printing futureItem without using futureItem
    cout << currentItem -> next -> id ;
    
    cout<<endl;
    
    cout << currentItem-> id << endl << currentItem -> price;
    return 0;
} 
