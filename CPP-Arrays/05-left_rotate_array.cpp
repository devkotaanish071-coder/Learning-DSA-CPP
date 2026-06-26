#include<iostream>
#include<vector>
using namespace std;

// Function to left-rotate the array by exactly one position
void left_rotate(vector<int>& array, int size){

    // Store the first element in a temporary variable so it doesn't get overwritten
    int temp = array[0];

    // Shift all remaining elements one position to the left
    for(int i = 1; i < size; i++){
        array[i - 1] = array[i];
    }

    // Move the original first element to the very end of the array
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

    // Call the function to rotate the array elements left by one
    left_rotate(array, size);

    // Print the modified array
    cout << "Rotated Array:" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}