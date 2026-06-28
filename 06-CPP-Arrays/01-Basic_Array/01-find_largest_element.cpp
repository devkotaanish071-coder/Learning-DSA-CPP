#include<iostream>
#include<vector>   //Used to declare vector array
#include<climits> //Used for INT_MIN and other limits
using namespace std;

int largest_element(vector<int>& array, int size){
    /*INT_MIN is used to set the largest variable value 
    to the minimum negative value so this works for negative value array also */
    int largest = INT_MIN;
    for(int i = 0; i < size; i++){
        if(largest < array[i]){
            largest = array[i];
        }
    }
    return largest;
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

    int largest = largest_element(array,size);  //Function Calling

    cout << "The largest element in given array is " << largest << endl;
    return 0;
}