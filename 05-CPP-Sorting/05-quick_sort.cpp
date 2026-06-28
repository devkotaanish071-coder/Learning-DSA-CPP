#include<iostream>
#include<vector>
using namespace std;

// Partitions the array around a pivot element so smaller items move left and larger items
int pivot(vector<int>& array, int low, int high){
    int pivot_element = low;     // Pick the first element of the segment as the pivot point
    int i = low;           // Left pointer to search for elements larger than the pivot
    int j = high;        // Right pointer to search for elements smaller than the pivot

    while(i < j){
        // Move pointer i right until an element strictly greater than the pivot is found
        while(i <= high && array[i] <= array[pivot_element]){
            i ++;
        }
        // Move pointer j left until an element smaller than or equal to the pivot is found
        while(j >= low && array[j] > array[pivot_element]){
            j --;
        }
        // If pointers haven't crossed paths yet, swap the misplaced elements
        if(i < j){
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    // Final Step: Place the pivot element into its true sorted position at index j
    int tomp = array[low];
    array[low] = array[j];
    array[j] = tomp;
    return j;
}

// Main recursive function that divides the array based on the partitioned pivot index
void quick_sort(vector<int>& array, int low, int high){
    if(low < high){

        // Partition the segment and retrieve the index of the locked-in pivot
        int pivot_index = pivot(array, low , high);

        // Recursively sort the left slice (elements smaller than pivot)
        quick_sort(array, low, pivot_index - 1);

        // Recursively sort the right slice (elements larger than pivot)
        quick_sort(array, pivot_index + 1, high);
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

    // Function Calling to sort the Array
    quick_sort(array, 0, size - 1);

    cout << "Sorted array using Quick Sort" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}