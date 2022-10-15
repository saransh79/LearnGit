#include<stdio.h>
#include<conio.h>
int main()
{
  int i, j, k = 0, n, x;
  printf("Enter Number of Rows: ");
  scanf("%d", &n);
  x = (n + 1) / 2;
  for (i = 1; i <= n; i++)
  {
    if (n % 2 == 0) {
      if (i <= x)  k++;
      if (i > x + 1) k--;
    }
    else
      i <= x ? k++ : k--;
    for (j = 1; j <= n; j++)
    {
      if (j >= x + 1 - k && j <= x - 1 + k)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}



