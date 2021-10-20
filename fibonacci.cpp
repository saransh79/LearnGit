#include <iostream>
using namespace std;

void fib(int n)
{
    int i1 = 0,i2 = 1,nextdgt;
    
    for (int i = 0; i <= n; i++)
    {
        cout << i1 << " ";
        nextdgt = i1 + i2;
        i1 = i2;
        i2 = nextdgt;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    fib(n);

    return 0;
}
