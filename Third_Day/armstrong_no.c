#include<stdio.h>

int main()
{
int n,m,fact=1;
int main_result;
int sum=0;
printf("Enter a positive number :");
scanf("%d",&n);
main_result=n;


while(n>0)
{
    m=n%10;
   fact=m*m*m;
   sum=sum+fact;
   printf("\n%d",fact);
n=n/10;
fact=1;
}

printf("\n%d",sum);

if (sum==main_result)
printf("\nThe number is rmstrong");
else
printf("\nThe number is not Armstrong");




return 0;

}