#include <iostream>
using namespace std;

int binarySearch(int array[], int first, int last, int value)
{
    int middle; // midpoint of the array
    //first is the first node, last is the last node
    if (first > last)
    {
        return -1;
    }
    middle = (first + last) / 2;
    if (array[middle] == value)
    {
        return middle;
    }
    //go the behind part of the array
    else if (array[middle] < value)
    {
        return binarySearch(array, middle + 1, last, value);
    }
    else // go to the front part of the array
    {
        return binarySearch(array, first, middle + 1, value);
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 2;
    cout << "The index of the value " << n << " in this array is " << binarySearch(array, 0, 9, n) << endl;
    return 0;
}