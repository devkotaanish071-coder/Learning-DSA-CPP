#include<iostream>
using namespace std;

void insertion_sort(int array[], int n){
    for(int i = 0; i <= n - 1; i++){
        int j = i;
        while(j > 0 && array[j - 1] > array[j]){
            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
            j--;
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

    insertion_sort(array,size);

    cout << "Sorted Array using Insertion sort:" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }

    return 0;
}