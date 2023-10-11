#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter the values of quadrant x and y :");
    scanf("%f%f", &x, &y);
    if ((x == 0) && (y == 1))
    {
        printf("(%f %f) lies on y axis");
    }
    else if ((x > 0) && (y > 0))
    {
        printf("(%f %f) lies on 1st quadrant ");
    }
    else if((x < 0 )&& (y > 0))
    {
        printf("(%f %f) lies on 2nd quadrant");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("(%f %f) lies on 3rd quadrant ");
    }
    else if ((x > 0) && (y < 0))
    {
        printf("(%f %f) lies on 4th quadrant ");
    }
    return 0;
}