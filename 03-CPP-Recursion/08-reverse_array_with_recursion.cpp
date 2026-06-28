#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    if(start >= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(arr,start+1,end-1);
}

int main(){

    int num;
    cout << "Enter the size of array:";
    cin >> num;

    int arr[num];
    cout << "Enter array elements:";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    reverse(arr,0,num-1);

    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
    return 0;
}