#include<iostream>
#include<vector>
using namespace std;

int maximum_consecutive_number(vector<int>& array, int size){
    
}

int main(){

    int size;
    cout << "Enter the array size:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter Array Elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    maximum_consecutive_number(array,size);

    return 0;
}