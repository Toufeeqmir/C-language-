# include<stdio.h>

int main(){
    float temp , vel,wcf;
    printf("enter the value of temp , vel");
    scanf("%f%f",&temp ,&vel);
    wcf = 35.4 + 0.6215*temp +(0.4275*temp - 35.75)*pow(vel,0.16f);
     printf("wind chill factor is %f\n",wcf);
    return 0;
}