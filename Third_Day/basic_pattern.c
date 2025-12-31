#include<stdio.h>

int main()
{
int sum=0;
int n;
printf("Enter a number :");
scanf("%d",&n);

for (int i=0; i<11; i++)
{
   if(i%2==0) 
   printf("*\n");

   else
    printf("**\n");
}




return 0;

}