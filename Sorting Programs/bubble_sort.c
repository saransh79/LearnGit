#include <stdio.h>

// BUBBLE SORT

void bubble_sort(int arr[], int n) {
	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// PRINT ARRAY

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}

void main()
{
	int arr[] = { 80, 90, 100, 40, 50, 30, 20, 70, 60, 10}, n = 10;

	bubble_sort(arr, n);

	print_arr(arr, n);
}
