#include <iostream>
using namespace std;

void swap(int a[], int x, int y) {
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void bubble(int a[], int n) {
    int i = n - 1;
    while(i > 0) {
        if(a[i] < a[i - 1]) {
            swap(a, i, i - 1);
        }
        i--;
    }
}

void bblSort(int a[], int n) {
    int i = 0;
    while(i < n - 1) {
        bubble(a, n);
        i++;
    }
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int sw = 0;
        for (int j = n - 1; j > 0; j--) {
            if(a[j] < a[j - 1]) {
                swap(a, j, j - 1);
                sw = 1;
            }
        }
        if (sw == 0) {
            break;
        }
    }
}

void display(int a[], int n) {
    int i = 0;
    while(i < n) {
        cout << a[i] << "  ";
        i++;
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int nums[size];
    cout << "Enter enements of array: ";
    for(int i =0; i < size; i++) {
        cin >> nums[i];
    }
    bubbleSort(nums, size);
    cout << "Sorted array: ";
    display(nums, size);
}
