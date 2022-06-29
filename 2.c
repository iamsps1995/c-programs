// no arguement w/o return type
#include <stdio.h>
void sum();

void main()
{
    int i;
    for (size_t i = 0; i <= 5; i++)
    {
        sum();
        printf("  I LOVE YOU");
    }
}

void sum()
{
    int a, b;
    printf(" enter any number");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("sum=%d\n", a + b);
}