// C++ program to convert Fahrenheit
// scale to Celsius scale
#include <bits/stdc++.h>
using namespace std;

// Function to convert Fahrenheit 
// to Celsius
float Conversion(float n)
{
	return (n - 32.0) * 5.0 / 9.0;
}

// Driver code
int main()
{
	float n = 40;
	cout << Conversion(n);
	return 0;
}
