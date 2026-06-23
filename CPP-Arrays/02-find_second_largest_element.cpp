#include<iostream>
#include<vector>      //Used ofr vector
#include<climits>    //Used for Limits
using namespace std;

int second_largest(vector<int>& array, int size){
    int largest_number = array[0];
    //Assigning the highest negative number to work for negative array 
    int second_largest_number = INT_MIN;
    for(int i = 0; i < size; i++){
        if(array[i] > largest_number){
            second_largest_number = largest_number;
            largest_number = array[i];
        }
        else if( (array[i] > second_largest_number) && (array[i] < largest_number) ){
            second_largest_number = array[i];
        }
    }
    return second_largest_number;
}

int main(){

    int size;
    cout << "Enter array size:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    //Function Calling
    int second_larger = second_largest(array, size);

    cout << "The second largest element in given array is " << second_larger << endl;

    return 0;
}