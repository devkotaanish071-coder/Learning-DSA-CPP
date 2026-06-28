#include<iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter number: ";
    cin >> number;

    // Total grid size (width and height) is always 2n - 1
    int size = 2 * number - 1;

    // Outer loop Tracks the current row coordinate
    for(int i = 0; i < size; i++){

        // Inner loop Tracks the current column coordinate
        for(int j = 0; j < size; j++){

            // Calculate distances from the current cell to all four edges of the grid
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            // First nested min() finds the smaller of top/bottom and left/right,
            // then the outer min() compares those two results to find the closest overall edge.
            int minDistance = min(min(top, bottom), min(left, right));

            // Subtracting the edge distance from the maximum number creates the concentric ring effect
            cout << number - minDistance << " ";
        }
        // Moves to the next line
        cout << endl;
    }
    return 0;
}