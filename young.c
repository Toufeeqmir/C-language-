# include<stdio.h>

int main(){
    int r ,s , a ,young;
    printf("Enter the age of ram ,sham and ajay :");
    scanf("%d%d%d",&r,&s,&a);
    if(r>s)
    {
        printf("sham is younger ");
    }
    else{
        printf("ram is younger ");
    }
    if(s>a)
    {
        printf("Ajay is younger ");

    }
    else{
        printf("Sham is younger ");
    }
   printf("the youngest in Ram(%d),sham(%d) and ajay(%d) is %d\n",r ,s , a ,young);
    return 0;
}