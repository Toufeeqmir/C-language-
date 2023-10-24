#include<stdio.h>
int main(){
   
    int a , i;
    int sum = 0;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    for( int i=10;i>=1;i--){
        printf("%d*%d = %d\n",a,i , a*i);
    }
    printf("sum of multiplication table is %d\n",sum);
    sum+=a*i;
    return 0;

}
