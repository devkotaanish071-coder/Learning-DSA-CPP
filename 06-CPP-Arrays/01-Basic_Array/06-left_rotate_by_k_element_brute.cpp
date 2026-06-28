#include<iostream>
#include<vector>
using namespace std;

// Function to left-rotate the array by k positions using a temporary array
void left_rotate_by_k_element(vector<int>& array, int size, int rotate){

    // If rotation steps are greater than array size, modulo reduces unnecessary full cycles
    rotate = rotate % size;
    int temp[rotate];
    for(int i = 0; i < rotate; i++){
        temp[i] = array[i];
    }

    // Shift the remaining elements of the array forward to the left by rotate positions
    for(int i = rotate; i < size; i++){
        array[i - rotate] = array[i] ;
    }

    // Copy the elements back from the temporary array into the empty slots at the end
    for(int i = size - rotate; i < size; i++){
        array[i] = temp[i-(size - rotate)];  // Using index offset to map temp correctly
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

    // Call the function to execute rotation logic
    left_rotate_by_k_element(array, size, rotate);

    // Print out the final shifted array
    cout << "Left Rotate:";
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }

    return 0;
}