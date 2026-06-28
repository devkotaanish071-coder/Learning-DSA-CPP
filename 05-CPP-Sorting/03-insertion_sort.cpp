#include<iostream>
using namespace std;

// Fuction to sort using Insertion Sort
void insertion_sort(int array[], int n){

    // Loop through each element of the array
    for(int i = 0; i <= n - 1; i++){

        // Pinter to track the current element
        int j = i;
        while(j > 0 && array[j - 1] > array[j]){

            // Swap adjacent elements if the left one is larger
            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
            j--;      // Move pointer left to continue comparing
        }
    }
}

int main(){

    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int array[size];
    cout << "Enter the array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    // Call the function to sort the array elements
    insertion_sort(array,size);

    cout << "Sorted Array using Insertion sort:" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }

    return 0;
}