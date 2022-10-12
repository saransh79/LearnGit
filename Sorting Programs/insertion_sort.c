#include <stdio.h>

// INSERTION SORT

void insertion_sort(int arr[], int n) {
	int key, j;
	for (int i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}


// PRINT ARRAY

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 80, 90, 100, 40, 50, 30, 20, 70, 60, 10}, n = 10;

	insertion_sort(arr, n);

	print_arr(arr, n);

	return 0;
}
