#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter a number :");
  scanf("%d",&a);
    printf("Enter a number :");
  scanf("%d",&b);

    printf("Enter a number :");
  scanf("%d",&c);

if(a>b && a>c)
{
    printf("%d is greater",b);
}
if(b>a && b>c)
{
    printf("%d is greater",b);
}
else 
{
    printf("%d is greater",c);
}

return 0;

}