# include<stdio.h>
#include<math.h>
int main(){
    int x , y , r , d;
    printf("Enter the x , y and r :");
    scanf("%d%d%d",&x, &y , &r);
   int dis=pow(x ,x) + pow(y , y);
   d= pow(r , r);
   if(d<dis)
   {
    printf("The point lies outside the circle");
   }
   if(d>dis)
   {
    printf("The point lies inside the circle");
   }
   if(d==dis){
    printf("The point lies on the circle");
   }
    return 0;
}