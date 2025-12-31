#include<stdio.h>

int main()
{


for (int i=0; i<10; i++)
{

 for(int j=0; j<=i; j++)
 {
 if(j%2==0){
 printf("?");
 }

 if(j%2!=0)
 {
    printf("!");
 }
   
 }
 
 
printf("\n");
  
}

return 0;

}