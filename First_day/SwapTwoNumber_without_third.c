#include<stdio.h>

int main()
{
 int a,b;
 printf("Enter Two Number :");
 scanf("%d %d",&a,&b);

//  a=a+b;
//  b=a-b;
//  a=a-b;

 a=a^b;
 b=a^b;
 a=a^b;

printf("\na is %d",a);
printf("\nb is %d",b);

    return 0;
}