#include <stdio.h>
#include <math.h>
int main()
{
    float mass;
    float g =  9.8;
    printf("enter the value of mass \n");
    scanf("%f",&mass);
    float force = mass*g;
    printf("the value of force is %f\n",force);

    return 0;
}