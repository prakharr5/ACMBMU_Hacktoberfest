// C++ program to print 
// 2D array using for loop
#include <iostream>
using namespace std;

// Driver code
int main() 
{
const int i = 3, j = 3;
// Declaring array
int arr[i][j] = {{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}};
for(int a = 0; a < 3; a++)
{
	for(int b = 0; b < 3; b++)
	{
	cout << arr[a][b] << " ";
	}
	cout << endl;
} 
	return 0;
}
