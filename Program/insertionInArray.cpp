#include <iostream>
using namespace std;

int main()
{
    int size, capacity, index, element;
    cin >> capacity >> size >> index >> element;

    int a[capacity];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    if (size >= capacity)
    {
        cout << "cannot insert";
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
            a[i + 1] = a[i];
        a[index] = element;
        size += 1;
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}

// With the help of functions
/*
#include<stdio.h>
 
 
void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");   
}
 
int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; 
}
 
int main(){
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index=1;
    display(arr, size); 
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr, size);
    return 0;
}
*/
