#include<stdio.h>

int main (){

    int len, bre;
    float area,peri;

    printf("enter a length :");
    scanf("%d",&len);

    printf("Enter a breadth :");
    scanf("%d",&bre);

    area=len*bre;

    peri=2*(len+bre);

    printf("\nArea is %f",area);
    printf("\nperimeter is %f",peri);
    return 0;


}