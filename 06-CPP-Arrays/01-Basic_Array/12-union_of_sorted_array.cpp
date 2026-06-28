#include<iostream>
#include<vector>
#include<set>
using namespace std;
 
void union_array(vector<int>& array1, vector<int>& array2){

    // Using set so it store unique and maintain the sorted order
    set<int> unique;

    // Iterating through first array
    for(int i = 0; i < array1.size(); i++){
        unique.insert(array1[i]);  // Inserting unique element in the set
    }

    // Iterating through second array
    for(int i = 0; i < array2.size(); i++){
        unique.insert(array2[i]);  // Inserting unique element in the set
    }

    // Inserting the value from set to a Temporarily Array
    vector<int> temp;
    for(auto it: unique){
        temp.push_back(it);
    }

    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] <<" ";
    }
}

int main(){

    int array1_size, array2_size;;
    cout << "Enter first array size:";
    cin >> array1_size;

    vector<int> array1(array1_size);
    cout << "Enter First array Elements:";
    for(int i = 0; i < array1_size; i++){
        cin >> array1[i];
    }

    cout << "Enter second array size:";
    cin >> array2_size;

    vector<int> array2(array2_size);
    cout << "Enter Second array elements:";
    for(int i = 0; i < array2_size; i++){
        cin >> array2[i];
    }

    union_array(array1, array2);
    return 0;
}