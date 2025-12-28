#include<stdio.h>

int main()
{
int sum=0;
int n;
printf("Enter a number :");
scanf("%d",&n);

// for (int i=1; i<11; i++)
// {
//     sum=sum+i;
// }

sum=n*(n+1)/2;


printf("sum is %d",sum);
return 0;

}