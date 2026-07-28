#include<iostream>
#include<vector>
using namespace std;

// Function to create insertion of 2 sorted arrays
vector<int> intersection_of_2_array(vector<int>& array1, vector<int>& array2){
    // Size of Array 2 and 0 means unvisited
    vector<int> visited(array2.size(), 0);
    vector<int> answer;
    for(int i = 0; i < array1.size(); i++){
        for(size_t j = 0; j < array2.size(); j++){
            // Found a match that hasn't been used
            if(array1[i] == array2[j] && visited[j] == 0){
                answer.push_back(array1[i]);
                visited[j] = 1;  // Mark as read
                break;
            }
            // Since Array is Sorted we can stop early if elements go to big
            if(array2[j] > array1[i]) break;
        }
    }

    return answer;

}

int main(){

    int size1, size2;
    cout << "Enter First Array size:";
    cin >> size1;

    vector<int> array1(size1);
    cout << "Enter First Array Elements:";
    for(int i = 0; i < size1; i++){
        cin >> array1[i];
    }

    cout << "Enter Second Array size:";
    cin >> size2;

    vector<int> array2(size2);
    cout << "Enter Second Array Elements:";
    for(int i = 0; i < size2; i++){
        cin >> array2[i];
    }

    // Storing the answer in Result Vector
    vector<int> result = intersection_of_2_array(array1, array2);

    // Printing the Output
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;

}