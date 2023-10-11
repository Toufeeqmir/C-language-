# include<stdio.h>

int main(){
    int num , sum , rem , ori;
    printf("Enter the number\n :");
    scanf("%d",&num);
    while(num>0){
        rem= num%10;
        num = num/10;
        sum = (sum +rem*rem*rem);

    }
    printf("sum = %d\n",sum);
    if(ori!=sum){
        printf("armstrong no\n");

    }
    else{
        printf("not armstrong no");
    }
    return 0;
}