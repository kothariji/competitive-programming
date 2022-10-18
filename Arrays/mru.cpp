// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to update the array
// in most recently used fashion
void mostRecentlyUsedApps(int* arr, int N, int K)
{
	int app_index = 0;

	// Finding the end index after K presses
	app_index = (K % N);

	// Shifting elements by 1 towards the found index
	// on which the K press ends
	int x = app_index, app_id = arr[app_index];
	while (x > 0) {
		arr[x] = arr[--x];
	}

	// Update the current active app
	arr[0] = app_id;
}

// Utility function to print
// the contents of the array
void printArray(int* arr, int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int K = 3;
	int arr[] = { 3, 5, 2, 4, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);

	mostRecentlyUsedApps(arr, N, K);
	printArray(arr, N);
	return 0;
}
