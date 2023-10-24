#include<stdio.h>
int main(){
   /* int a = 5;
    printf("write the programe to print multiplicaton table in reverse order");
    for(int i=10;i>=1;i--){
        printf("%d *%d= %d\n",a , i , a*i);
    }
*/
   /* int num;
    printf("enter the value of num");
    scanf("%d\n",&num);
    for(int i = 10;i>=1;i--){
        printf("%d*%d=%d\n",num , i , num*i);
    }*/
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