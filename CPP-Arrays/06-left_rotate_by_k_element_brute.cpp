#include<iostream>
#include<vector>
using namespace std;

void left_rotate_by_k_element(vector<int>& array, int size, int rotate){
    rotate = rotate % size;
    int temp[rotate];
    for(int i = 0; i < rotate; i++){
        temp[i] = array[i];
    }

    for(int i = rotate; i < size; i++){
        array[i - rotate] = array[i] ;
    }

    for(int i = size - rotate; i < size; i++){
        array[i] = temp[i-(size - rotate)];
    }
}

int main(){

    int size;
    cout << "Enter array size:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int rotate;
    cout << "Enter how many time you want to rotate the array:";
    cin >> rotate;

    left_rotate_by_k_element(array, size, rotate);

    cout << "Left Rotate:";
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }

    return 0;
}