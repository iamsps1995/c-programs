// declaration
#include <stdio.h>

void sum();

void main()
{
    sum();
    printf("I LOVE YOU");
}

void sum()
{
    int a, b, sum = 0;
    printf("enter any numbers");
    scanf("%d ", &a);
    scanf("%d", & b);
    sum = a + b;
    printf("addition=%d", sum);
}
