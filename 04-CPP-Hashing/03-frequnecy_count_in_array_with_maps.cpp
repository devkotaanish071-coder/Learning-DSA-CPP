#include<iostream>
#include<map>     // Required for declaring maps
using namespace std;

int main(){

    //Asking size of array
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    //Taking array input from user
    int array[size];
    cout << "Enter the elemnts in array:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    //Creating a map which store the numbers as key and count as value
    map<int, int> mpp;
    for(int i = 0; i < size; i++){
        mpp[array[i]] ++;
    }

    int search;
    cout << "Enter total searches:";
    cin >> search;
    while(search--){
        int number;
        cout << "Enter the number to search:";
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;

}