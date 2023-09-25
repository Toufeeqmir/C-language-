// #include <stdio.h>

// int main()
// {
//     float celsius = 54, far;
//     far = (celsius * 9 / 5) + 32;
//     printf("the value of  this celsius temp in fahrenhite is %f", far);
//     return 0;
// }
#include<stdio.h>
int main()
{
float temp , far;
printf("Enter the value of temp:");
scanf("%f",&temp);
far = (temp *9/5) + 32;
printf("the value of this temp in fahrenhite is %f",far);

return 0;
}