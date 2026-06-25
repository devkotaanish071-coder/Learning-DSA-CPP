#include<iostream>
#include<vector>
using namespace std;

bool is_sorted(vector<int>& array, int size){
    for(int i = 0; i < size - 1; i++){
        if(array[i] >= array[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int size;
    cout << "Enter the size:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    bool is_sort = is_sorted(array, size);
    if(is_sort == 1){
        cout << "The Array is Sorted.";
    }else{
        cout << "The Array isn't Sorted.";
    }

    return 0;
}