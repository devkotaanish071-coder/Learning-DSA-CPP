#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int remove_duplicate(vector<int>& array, int size){

    // Pointer 'a' tracks the index of the last unique element found
    int a = 0;

    // Loop through the array starting from the second element
    for(int b = 1; b < size; b++){

        // If a new unique element is found
        if(array[a] != array[b]){
            a++;                 // Move the unique pointer forward
            array[a] = array[b]; // Shift the unique element to its new position
        }
        // If they are equal, pointer 'b' just continues to skip the duplicate
    }
    
    // 'a' is an index, so the number of unique elements is the index + 1
    return a + 1;
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

    int unique_element = remove_duplicate(array, size);
    cout << "There are " << unique_element << " unique elements in the array";
    return 0;

}