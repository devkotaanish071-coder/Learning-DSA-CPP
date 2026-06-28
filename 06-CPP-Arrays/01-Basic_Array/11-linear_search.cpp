#include<iostream>
#include<vector>
using namespace std;

void search(vector<int>& array, int size, int search_element){
    int counter = 0;     // Counter flag counts that element is found or not

    // Search the whole array
    for(int i = 0; i < size; i++){
        if(array[i] == search_element){
            cout << "Element found at " << i << " index";
            counter ++;
            break;    // If element is found the loop is terminated
        }
    }

    // If element is not found the flag is not incremented and this prints
    if (counter == 0){
        cout << "Element not in array";
    }
}

int main(){

    int size;
    cout << "Enter the array size:";
    cin >> size;

    vector<int> array(size);
    cout << "Enter the array elements:";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int search_element;
    cout << "Enter the element to search:";
    cin >> search_element;

    search(array, size, search_element);
    return 0;
}