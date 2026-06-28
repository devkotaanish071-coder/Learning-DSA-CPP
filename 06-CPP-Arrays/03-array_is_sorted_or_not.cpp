#include<iostream>
#include<vector>
using namespace std;

// Function to check if a vector is sorted in ascending order
bool is_sorted(vector<int>& array, int size){

    // Loop through the array up to the last element
    for(int i = 0; i < size - 1; i++){

        // If any current element is greater than or equal to the next one, the order is broken
        if(array[i] >= array[i+1]){
            return false;  // Exit early and return false
        }
    }
    // Return true if the loop completes without finding any out-of-order elements
    return true;
}

int main(){

    int size;
    cout << "Enter the size:";
    cin >> size;

    // Declare a dynamic vector with the user-defined size
    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    // Call the function to check if the filled vector is sorted
    bool is_sort = is_sorted(array, size);

    // Output the final result based on the boolean flag
    if(is_sort == 1){
        cout << "The Array is Sorted.";
    }else{
        cout << "The Array isn't Sorted.";
    }

    return 0;
}