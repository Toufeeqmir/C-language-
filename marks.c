# include<stdio.h>

int main(){
    int avg , sum = 0;
    int i;
    int marks[4];
    for(i=0;i<4;i++){
        printf("Enter the marks");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<4;i++)
     sum+=marks[i];
    avg = sum/4;
    printf("%d",avg);
        return 0;
}