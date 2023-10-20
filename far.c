#include<stdio.h>
int main()
{
float temp , cel;
printf("Enter the value of temp :");
scanf("%f",&temp);
cel = (temp * 5/9 )-32;
printf("the value of temp in celsius is %f\n",cel);
return 0;
}