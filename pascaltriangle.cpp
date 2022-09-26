#include <iostream>
using namespace std;
int fact(int n)
{
    int fac = 1;
    for (int a = 1; a <= n; a++)
    {
        fac *= a;
    }

    return fac;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        cout << "\n";
    }
    return 0;
}