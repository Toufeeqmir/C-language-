# include<stdio.h>

int main(){
    int a , b ,c ;
    printf("write the programe to print the largest number");
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d", &b);
    printf("enter the value of c :");
    scanf("%d", &c);
   if(a>b&&a>c){
    printf("%d is largest number" ,a);
   }
   else if(b>c&&b>a){
    printf("%d is largest no",b);

   }
   else{
    printf("%d is largest no", c);
   }
    return 0;
}