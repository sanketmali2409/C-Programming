#include<stdio.h>

int main()
{

    int r;
    printf("Enter a radius: ");
    scanf("%d",&r);
    float area =3.14*r*r;
    float circumperence= 2*3.14*r;

    printf("\nArea is %f",area);
    printf("\nCircumperference is %f",circumperence);

    return 0;
}