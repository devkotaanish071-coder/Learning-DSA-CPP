#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int>& array, int low, int high){
    int pivot_element = low;
    int i = low;
    int j = high;
    while(i < j){
        while(i <= high && array[i] <= array[pivot_element]){
            i ++;
        }
        while(j >= low && array[j] > array[pivot_element]){
            j --;
        }
        if(i < j){
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int tomp = array[low];
    array[low] = array[j];
    array[j] = tomp;
    return j;
}

void quick_sort(vector<int>& array, int low, int high){
    if(low < high){
        int pivot_index = pivot(array, low , high);
        quick_sort(array, low, pivot_index - 1);
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

    quick_sort(array, 0, size - 1);

    cout << "Sorted array using Quick Sort" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}