#include<iostream>
#include<vector>
using namespace std;

void moving_zero_optimal(vector<int>& array, int size){
    int a = 0;       // Pointer for next non-zero element posotion

    // b scans through the entire array
    for(int b = 0; b < size; b++){
        if(array[b] != 0){

            // Swap the non zero element with the element at pointer a
            int temp = array[a];
            array[a] = array[b];
            array[b] = temp;
            a++;       // Move to the non-zero placeholder
        }
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

    moving_zero_optimal(array, size);

    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }
    return 0;
}