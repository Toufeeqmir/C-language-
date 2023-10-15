# include<stdio.h>

int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0){
            printf("leapyear\n");
        }
        else{
            printf("not leapyear\n");
        }
    }
    if(year%4==0)
    {
        printf("leapyear\n");
    }
    else{
        printf("not leapyear ");
    }
    return 0;
}