#include <bits/stdc++.h>
 
using namespace std;
 
int count(int coins[], int n, int sum)
{
   
    int table[sum + 1][n];
 
    
    for (int i = 0; i < n; i++)
        table[0][i] = 1;
 
    
    for (i = 1; i < sum + 1; i++) {
        for (int j = 0; j < n; j++) {
           
            int x = (i - coins[j] >= 0) ? table[i - coins[j]][j]: 0;
 
            int y = (j >= 1) ? table[i][j - 1] : 0;
 
           
            table[i][j] = x + y;
        }
    }
    return table[sum][n - 1];
}
 
int main()
{
    int coins[] = { 1, 2, 3 };
    int n = sizeof(coins) / sizeof(coins[0]);
    int sum = 4;
    cout << count(coins, n, sum);
    return 0;
}
