#include <iostream>
using namespace std;

int main()
{
    int size, index;
    cin>> size >> index;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = index; i <= size - 1; i++)
        a[i] = a[i + 1];
    size -= 1;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}