#include<stdio.h>

int main()
{
int n,m,fact=1;
int main_result;
int sum=0;
printf("enter a positive number :");
scanf("%d",&n);
main_result=n;

while(n>0)
{
    m=n%10;
for (int i=1; i<=m; i++)
{
   fact=fact*i;
  
}
sum=sum+fact;
printf("\n%d",fact);
n=n/10;
fact=1;
}

printf("\n%d",sum);

if (sum==main_result)
printf("\nThe number is strong");
else
printf("The number is not strong");




return 0;

}