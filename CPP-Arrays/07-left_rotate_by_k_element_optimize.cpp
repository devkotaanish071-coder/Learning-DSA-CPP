#include<iostream>
#include<algorithm>
using namespace std;

void left_rotate_by_k_elements_optimized(int array[], int size, int rotate){
    rotate = rotate % size;
    reverse(array, array + rotate);
    reverse(array + rotate, array + size);
    reverse(array, array +  size);
}

int main(){

    int size;
    cout << "Enter array elements:";
    cin >> size;

    int array[size];
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int rotate;
    cout << "Enter how many you want to rotate:";
    cin >> rotate;

    left_rotate_by_k_elements_optimized(array, size, rotate);
    for(int i = 0; i < size; i++){
        cout << array[i] <<" ";
    }
    return 0;

}