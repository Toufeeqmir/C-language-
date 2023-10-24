# include<stdio.h>

int main(){
    float tax = 0, income;
    printf("enter the income\n");
    scanf("%f\n",&income);
    if(income>=250000 && income<=50000){
        tax = tax+0.50 *(income - 250000);
    }
    if(income>=50000 && income<=100000){
        tax = tax+0.20 *(income - 50000);
    }
    if(income>=100000 && income<=200000){
        tax = tax+0.30 *(income - 100000);
    }
    printf("your income tax to be  paid on 28 of this month %f\n", tax);
    return 0;
}