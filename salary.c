# include<stdio.h>

int main(){
    float yos , salary;
    char G,Q;
    printf("Enter the year of service :");
    scanf("%d",&yos);
    printf("Enter the gender , qualfication \n:");
    scanf("%c%c",&G ,&Q);
    if(yos>10){
        if(Q=='p');
        if(G=='m');
        printf("the salary is 15000");
     
    if(Q=='u'){
        printf("the salary is 12000");
    }
    }
    if(yos<=10){
        if(Q=='p');
        if(G=='m');
        printf("the salary is 10000");
    }
    else if(Q=='u'){
        printf("the salary is 5000");
    }
    if(yos>10){
        if(G=='f');
        if(Q=='p');
        printf("the salary is 12000");

    }
    if(Q=='u'){
        printf("the salary  is 9000");
    }
     else if(yos<10){
        if(Q=='p');
        printf("the salary is 6000");
    }
    else if(Q=='u'){
        printf("the salary is 3000");
    }
    return 0;
}