#include<iostream>
using namespace std;

//Function for Selection sort
void selection_sort(int array[], int num){
    for(int i = 0; i <= num - 2; i++){
        int min = i;
        for(int j = i; j <= num -1; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main(){

    //Taking array size input
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    //Taking array input
    int array[size];
    cout << "Enter the array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    //Calling Selection Sort Function
    selection_sort(array,size);

    //Printing the array
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;

}