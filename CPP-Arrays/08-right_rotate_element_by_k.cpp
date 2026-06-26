#include<iostream>
#include<vector>
using namespace std;

void reverse_element(vector<int>& array, int start, int end){
    while(start <= end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

void right_rotate_by_k(vector<int>& array, int size, int rotate){
    rotate = rotate % size;
    reverse_element(array, 0 , size - rotate - 1);
    reverse_element(array, size - rotate, size - 1);
    reverse_element(array, 0, size - 1);

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

    int rotate;
    cout << "Enter how many time you want to rotate:";
    cin >> rotate;

    right_rotate_by_k(array, size, rotate);
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }
    return 0;
}