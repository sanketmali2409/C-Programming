#include<stdio.h>

int main()
{
int result=1;
int base,index;
printf("Enter a positive number :");
scanf("%d",&base);
printf("Enter a positive number :");
scanf("%d",&index);

// result =base;
// for (int i=1; i<index; i++)
// {
//     result=result*base;
  
// }

while(index>0)
{
   if(index %2==1)
   {
    result=result*base;
   }
   base *=base;
   index /=2;

}


printf("Power is %d",result);



return 0;

}