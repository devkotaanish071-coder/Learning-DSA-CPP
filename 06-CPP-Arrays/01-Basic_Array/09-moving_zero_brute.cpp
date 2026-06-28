#include<iostream>
#include<vector>
using namespace std;

void moving_zero(vector<int>& array, int size){

    vector<int> temp;    // Temporaraily vector to store all non zero element

    // Collect all non zero element in the vector
    for(int i = 0; i < size; i++){
        if(array[i] != 0){
            temp.push_back(array[i]);
        }
    }

    // Copy the non-zero element back into the beginning of array
    for(int i = 0; i < temp.size(); i++){
        array[i] = temp[i];
    }

    // Fill the remaining indexes with 0
    for(int i = temp.size(); i < size; i++){
        array[i] = 0;
    }
}

int main(){

    int size;
    cout << "Enter the size of Array:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    moving_zero(array, size);
    
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }

    return 0;
}