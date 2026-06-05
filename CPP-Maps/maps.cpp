#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vectorr<int> v;
    map<int, string> work;
    work.insert({1,"Anish"});
    work.insert({2,"Ayush"});
    for(auto ab:work){
        cout << ab.first << " " << ab.second << endl;
    }
    if(work.find(1)!=work.end()){
        cout<<"found";
    }
}