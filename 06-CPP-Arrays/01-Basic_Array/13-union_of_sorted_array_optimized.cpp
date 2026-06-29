#include<iostream>
#include<vector>
using namespace std;

// Function of find Union of 2 pre-sorted array
vector<int> union_of_sorted_array_optimized(vector<int>& array1, vector<int>& array2, int size1, int size2){
    int a = 0;   // Tracks Array1
    int b = 0;   // Tracks Array2
    vector<int> unionArr;   // Vector to store the unique element

    // Traverse both array until one run out of element
    while(a < size1 && b < size2){

        // If element in array1 smaller of equal to eveluate it first
        if(array1[a] <= array2[b]){

            // Insert only if it's the first element or different form the last inserted item
            if(unionArr.size() == 0 || unionArr.back() != array1[a]){
                unionArr.push_back(array1[a]);
            }
            a++;    // Move the pointer forward
        }else{

            // If element in Array2 is smaller evaluate it
            if(unionArr.size() == 0 || unionArr.back() != array2[b]){
                unionArr.push_back(array2[b]);
            }
            b++;  // Move the pointer forward
        }
    }

    // Process if any element left in Array1
    while(a < size1){
        if(unionArr.size() == 0 || unionArr.back() != array1[a]){
            unionArr.push_back(array1[a]);
        }
        a++;
    }

    // Process if any element left in Array2
    while(b < size2){
        if(unionArr.size() == 0 || unionArr.back() != array2[b]){
            unionArr.push_back(array2[b]);
        }
        b++;
    }

    return unionArr;  // Return the union vector array
}

int main(){

    int size1, size2;
    cout << "Enter the size of first Array:";
    cin >> size1;

    vector<int> array1(size1);
    cout << "Enter first array elements:";
    for(int i = 0; i < size1; i++){
        cin >> array1[i];
    }

    cout << "Enter the size of second array:";
    cin >> size2;

    vector<int> array2(size2);
    cout << "Enter second array elements:";
    for(int i = 0; i < size2; i++){
        cin >> array2[i];
    }

    // Store the output form the function in Result
    vector<int> result = union_of_sorted_array_optimized(array1, array2, size1, size2);

    // Print the unique elements in the array
    cout << "Union of 2 Sorted array:" << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}