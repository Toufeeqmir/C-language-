
#include <stdio.h>

int main()
{
    int n, x, y, z, m, rev;
    printf("enter the four digit no n:");
    scanf("%d", &n);
    x = n % 10;
    n = n / 10;
    y = n % 10;
    n = n / 10;
    z = n % 10;
    n = n / 10;
    m = n % 10;
    n = n / 10;
    printf("the reverse is %d%d%d%d ", x, y, z, m);
    printf("\n");
    if (x == m && y == z)
    {
        printf("the no is palindrome ");
    }
    else
    {
        printf("the no is not palindrome");
    }
    return 0;
}