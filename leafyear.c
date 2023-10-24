# include<stdio.h>

int main(){
    printf("write the programe to print that year is leaf year or not");
    int a;
   printf("enter the value of a");
   scanf("%d\n",&a);
   if(a%4==0){
    printf("the year is a leaf year");
   }
   else{
    printf("year is not a leaf year");
   }

   int n , b;
   printf("enter the value of n");
   scanf("%d",&n);
   printf("enter the value of b ");
   scanf("%d",&n);
   printf("the sum of b and n is %d",a+n);


    return 0;
}