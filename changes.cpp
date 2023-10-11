#include <iostream>
using namespace std;

void spiralPrint(int arr[][3], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Print rightmost column
        for (int i = top; i <= bottom; ++i) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Print bottom row (if exists)
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Print leftmost column (if exists)
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    spiralPrint(arr, rows, cols);
    
    return 0;
}
