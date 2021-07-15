// CPP Program to find magic index.
#include <bits/stdc++.h>
using namespace std;

int magicIndex(int* arr, int start, int end)
{
	// If No Magic Index return -1;
	if (start > end)
		return -1;

	int midIndex = (start + end) / 2;
	int midValue = arr[midIndex];

	// Magic Index Found, return it.
	if (midIndex == midValue)
		return midIndex;

	// Search on Left side
	int left = magicIndex(arr, start, min(midValue,midIndex - 1));

	// If Found on left side, return.
	if (left >= 0)
		return left;

	// Return ans from right side.
	return magicIndex(arr, max(midValue, midIndex + 1),end);
}

// Driver program
int main()
{
	int arr[] = { 1 ,335, 501, 170, 725, 479, 359 ,963 ,465 ,706 ,146 ,12 ,828 ,962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422 ,717, 719, 896, 448 ,727 ,772 ,539 ,870, 913, 668, 300 ,36 ,895, 704 ,812 ,323};
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = magicIndex(arr, 1,  n);
	if (index == -1)
		cout << "No Magic Index";
	else
		cout << "Magic Index is : " << index;
	return 0;
}
