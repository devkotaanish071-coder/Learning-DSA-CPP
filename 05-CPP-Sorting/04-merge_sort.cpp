#include<iostream>
#include<vector>
using namespace std;

// Merges two sorted subarrays into a single sorted array
void merge(int array[], int low, int mid, int high){

    vector<int> temp;     // Temporary storage to hold merged elements
    int left = low;       // Starting index of the left sorted subarray
    int right = mid + 1;  // Starting index of the right sorted subarray
    
    // Compare elements from both subarrays and push the smaller one into temp
    while(left <= mid && right <= high){
        if(array[left] <= array[right]){
            temp.push_back(array[left]);
            left ++; 
        }else{
            temp.push_back(array[right]);
            right ++;
        }
    }

    // If there are remaining elements in the left subarray, copy them to temp
    while(left <= mid){
        temp.push_back(array[left]);
        left ++;
    }

    // If there are remaining elements in the right subarray, copy them to temp
    while(right <= high){
        temp.push_back(array[right]);
        right ++;
    }

    // Copy the completely sorted elements from temp back into the original array
    for(int i = low; i <= high; i++){
        array[i] = temp[i - low];
    }

}

// Main recursive function that repeatedly divides the array in half
void merge_sort(int array[], int low, int high){

    // Base condition: Stop recursion when subarray has 1 or 0 elements
    if(low >= high){
        return;
    }

    int mid = (low + high) / 2;       // Find the midpoint of the current array segment
    merge_sort(array, low , mid);
    merge_sort(array, mid+1 , high);
    merge(array, low, mid, high);
}

int main(){

    int size;
    cout << "Enter size of array:";
    cin >> size;

    vector <int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    // Function calling to sort the Array
    merge_sort(array.data(), 0, size - 1);

    cout << "Array sorted using Merge sort" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    } 

    return 0;
    
}