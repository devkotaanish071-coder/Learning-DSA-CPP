#include<iostream>
using namespace std;

int main(){

    //Taking array size from user
    int number;
    cout << "Enter the size of array:";
    cin >> number;

    //Taking array elements
    int array[number];
    cout << "Enter array elements:";
    for(int i = 0; i < number; i++){
        cin >> array[i];
    }

    //Declaring hash with 10 elemnts for now and 0 in all 10 elements
    int hash[10] = {0};
    for(int i = 0; i < number; i++){
        hash[array[i]] += 1;
    }

    int search;
    cout << "Enter the number of searches:";
    cin >> search;
    while(search--){
        int num;
        cout << "Enter a number to search:";
        cin >> num;
        cout << hash[num] << endl;
    }

    return 0;
}