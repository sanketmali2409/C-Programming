#include<stdio.h>

int main()
{
int sum=0;
int n;
printf("Enter a number :");
scanf("%d",&n);

// for (int i=2; i<n; i++)
// {
//    if(n%i==0)
//    {
//     printf(" %d ", i);
//    }
// }


for (int i=2; i*i<=n; i++)
if(n%i==0)
{
    printf("%d\n",i);
    if(i!=n/i)
    { printf("%d\n",n/i);
    }
   

}



return 0;

}