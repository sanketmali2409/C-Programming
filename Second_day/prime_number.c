#include<stdio.h>

int main()
{
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  int sum=0;

for(int i=2; i*i<n; i++)
{
 if(n%i==0){
    printf("This is not Prime number");
    sum=1;
    break;
 }
}

 if(sum!=1){
    printf("The number is prime");
 }



return 0;

}