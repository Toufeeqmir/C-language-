# include<stdio.h>

int main(){
    struct book{
        char name;
        float price;
        int pages;

    };
    struct book b1 = {'B',39.0,500};
    printf("Adress of name = %u\n",&b1.name);
    printf("the name of book is %s",'name');
    printf("Adress of price = %u\n",&b1.price);
    printf("Adress of pages = %u\n",&b1.pages);
    return 0;
}