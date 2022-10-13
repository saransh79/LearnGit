#include <stdio.h>

// SELECTION SORT

void selection_sort(int arr[], int n) {
	int min_idx, temp, i, j;
	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		if (min_idx != i) {
			temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
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

	selection_sort(arr, n);

	print_arr(arr, n);
}
