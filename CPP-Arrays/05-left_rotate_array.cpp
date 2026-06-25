#include<iostream>
#include<vector>
using namespace std;

void left_rotate(vector<int>& array, int size){
    int temp = array[0];
    for(int i = 1; i < size; i++){
        array[i - 1] = array[i];
    }
    array[size - 1] = temp;
}

int main(){

    int size;
    cout << "Enter the size of array:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    left_rotate(array, size);

    cout << "Rotated Array:" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}