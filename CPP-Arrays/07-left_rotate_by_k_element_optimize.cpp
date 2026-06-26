#include<iostream>
#include<algorithm>  // Required for the reverse() function
using namespace std;

// Function to left-rotate an array by k elements in place using reversal
void left_rotate_by_k_elements_optimized(int array[], int size, int rotate){

    // Handle cases where rotation steps exceed the array size
    rotate = rotate % size;
    // Step 1: Reverse the first 'rotate' elements (from index 0 to rotate-1)
    reverse(array, array + rotate);

    // Step 2: Reverse the remaining elements (from index rotate to size-1)
    reverse(array + rotate, array + size);

    // Step 3: Reverse the entire array to put everything in the correct shifted order
    reverse(array, array +  size);
}

int main(){

    int size;
    cout << "Enter array elements:";
    cin >> size;

    int array[size];
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int rotate;
    cout << "Enter how many you want to rotate:";
    cin >> rotate;

    //Call the function
    left_rotate_by_k_elements_optimized(array, size, rotate);

    //Print the final rotated array
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }
    return 0;

}