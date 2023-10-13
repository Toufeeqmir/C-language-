# include<stdio.h>

int main(){
    char  city;
    printf("enter the city:");
    scanf("%c",&city);
   char district;
    printf("enter the district:");
    scanf("%c",&district);
     char village = city;
    city = district;
    district = village;
    printf("the city is %d\n",city);
    printf("the district is %d\n",district);
    return 0;
}