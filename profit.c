# include<stdio.h>

int main(){
    float profit;
    float totalrevenue , totalexpenses;
    printf("enter the value of totalrevenue\t");
    scanf("%f",&totalrevenue);
    printf("enter the value of a totalexpenses\t");
    scanf("%f",&totalexpenses);
    profit = totalrevenue - totalexpenses;
    printf("the profit is %f\n",profit);

    return 0;
}