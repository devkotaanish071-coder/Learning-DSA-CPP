#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection_of_2_missing_number(){

}

int main(){

    int size1;
    cout << "Enter the size of first Array:";
    cin >> size1;

    vector<int> array1(size1);
    cout << "Enter First array elements:";
    for(int i = 0; i < size1; i++){
        cin >> array1[i];
    }

    int size2;
    cout << "Enter second array size:";
    cin >> size2;

    vector<int> array2(size2);
    cout << "Enter second array elements:";
    for(int i = 0; i < size2; i++){
        cin >> array2[i];
    }
}