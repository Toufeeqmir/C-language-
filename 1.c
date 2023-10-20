#include<stdio.h>
int main()
{
struct book{
    char name;
    float page;
    float price;
};
struct book b1 , b2 , b3;

printf("Enter the name , page , price of book 1 :");
scanf("%c %f %f ",&b1.name , &b1.page ,&b1.price);
printf("Enter the  name , page and price of book 2 :");
scanf("%c %f%f",&b2.name , &b2.page, &b2.price);
printf("After we do that ");
printf("%c %f%f",b1.name,b1.page,b1.price);
printf("%c%f%f",b2.name , b2.page , b2.price);
return 0;
}