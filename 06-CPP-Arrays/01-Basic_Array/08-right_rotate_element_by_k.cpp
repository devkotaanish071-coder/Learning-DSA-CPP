#include<iostream>
#include<vector>
using namespace std;

// Helper function to reverse a segment of the vector in place using two pointers
void reverse_element(vector<int>& array, int start, int end){

    // Keep swapping elements until the start pointer meets or passes the end pointer
    while(start <= end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;  //Move right
        end--;  //Move left
    }
}

// Function to right-rotate a vector by 'rotate' elements in place
void right_rotate_by_k(vector<int>& array, int size, int rotate){

    // Handle cases where rotation steps are larger than the array size
    rotate = rotate % size;

    // Step 1: Reverse the first part of the array up to the rotation cutoff point
    reverse_element(array, 0 , size - rotate - 1);

    // Step 2: Reverse the remaining 'rotate' elements at the end of the array
    reverse_element(array, size - rotate, size - 1);

    // Step 3: Reverse the entire array to arrive at the final right-rotated state
    reverse_element(array, 0, size - 1);

}

int main(){

    int size;
    cout << "Enter the size:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int rotate;
    cout << "Enter how many time you want to rotate:";
    cin >> rotate;

     // Execute the optimized right-rotation algorithm
    right_rotate_by_k(array, size, rotate);

    //Printing the rotated array
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }
    return 0;
}