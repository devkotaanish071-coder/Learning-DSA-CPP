#include<iostream>
using namespace std;

void print(int num,int arr[]){
    int *a = &arr[0];
    int *b = &arr[num-1];
    while(a < b){
        int temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
}

int main(){

    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    print(n,arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
