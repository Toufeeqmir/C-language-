#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no;
    printf("Enter the positive or negative no :");
    scanf("%d", &no);
    printf("Absolute value of %d is %d\n", no, abs(no));
    return 0;
}