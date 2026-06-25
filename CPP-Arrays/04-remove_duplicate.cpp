#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int remove_duplicate(vector<int>& array, int size){
    int a = array[0];
    int b = array[0+1];
    for(int i = 0; i < size - 1; i++){
        if(array[a] == array[b]){
            b++;
        }
        else if(array[a] != array[b]){
            a++;
            array[a] = array[b];
            b++;
        }
    }
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