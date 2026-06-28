#include<iostream>
#include<vector>
using namespace std;

void merge(int array[], int low, int mid, int high){

    vector<int> temp;
    int left = low;
    int right = mid + 1;
    
    while(left <= mid && right <= high){
        if(array[left] <= array[right]){
            temp.push_back(array[left]);
            left ++; 
        }else{
            temp.push_back(array[right]);
            right ++;
        }
    }

    while(left <= mid){
        temp.push_back(array[left]);
        left ++;
    }

    while(right <= high){
        temp.push_back(array[right]);
        right ++;
    }

    for(int i = low; i <= high; i++){
        array[i] = temp[i - low];
    }

}

void merge_sort(int array[], int low, int high){

    if(low >= high){
        return;
    }

    int mid = (low + high) / 2;
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

    merge_sort(array.data(), 0, size - 1);

    cout << "Array sorted using Merge sort" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    } 

    return 0;
    
}