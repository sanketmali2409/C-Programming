#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nSum is %d", a + b);
    printf("\nSub is %d", a - b);
    printf("\nMul is %d", a * b);

    if (b != 0)
    {
        printf("\nDivide is %d", a / b);
    }
    else
    {
        printf("\nDivision not possible (b = 0)");
    }

    return 0;
}
