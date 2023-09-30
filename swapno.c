# include<stdio.h>
void swap(int ,int);
int main(){
    int a , b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a , &b);
    swap(a,b);
    printf("%d\n%d\n",a , b);
    return 0;
}
void swap(int x , int y){
    int temp =x;
    x = y;
   y = temp;
    printf("\n%d\n%d\n",x , y);
   
}