#include<iostream>
using namespace std;

//Bubble sort function
void bubble_sort(int array[], int n){
    for(int i = 0; i < n-1; i++){
        int did_swap = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                did_swap = 1;
            }
        }
        if(did_swap == 0){
            break;
        }
    }
}

int main(){

    //Taking array size input
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    //Taking array elements input
    int array[size];
    cout << "Enter the array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    //Calling function
    bubble_sort(array,size);

    //Printing the array after sorting
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}