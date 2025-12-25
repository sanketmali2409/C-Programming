#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter Two number :");
  scanf("%d %d",&a,&b);

  int square=a*a+2*a*b+b*b;
  
  printf("Square is %d",square);
    return 0;



}