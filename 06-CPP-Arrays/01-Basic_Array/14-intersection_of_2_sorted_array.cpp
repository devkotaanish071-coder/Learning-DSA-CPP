#include<iostream>
#include<vector>
using namespace std;

void intersection_of_2_array(vector<int>& array1, vector<int>& array2){
    
}

int main(){

    int size1, size2;
    cout << "Enter First Array size:";
    cin >> size1;

    vector<int> array1(size1);
    cout << "Enter First Array Elements:";
    for(int i = 0; i < size1; i++){
        cin >> array1[i];
    }

    cout << "Enter Second Array size:";
    cin >> size2;

    vector<int> array2(size2);
    cout << "Enter Second Array Elements:";
    for(int i = 0; i < size2; i++){
        cin >> array2[i];
    }

    intersection_of_2_array(array1, array2);
}