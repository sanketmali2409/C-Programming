#include<stdio.h>

int main()
{
int sum_even=0;
int sum_odd=0;
int n;
printf("Enter a number :");
scanf("%d",&n);

for (int i=1; i<n; i++)
{
    if(i%2==0)
    {
        sum_even=sum_even+i;

    }

    else{
        sum_odd=sum_odd+i;
    
    }
    
}



printf("\nsum of even number is %d",sum_even);
printf("\nsum of odd number is %d",sum_odd);
return 0;

}