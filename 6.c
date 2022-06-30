// Write a program in C to copy the elements of one array into another array.
#include <stdio.h>
int main()
{
    int i, n, a[10], b[10];
    printf("enter array elements ");
    for (size_t i = 0; i <= 10; i++)

    {
        scanf("%d", &a[i]);
    }
    for (size_t i = 0; i <= 10; i++)
    {
        a[i] = b[i];
    }
    for (size_t i = 0; i <= 10; i++)
    {
        printf("%d", a[i]);
    }
    for (size_t i = 0; i <= 10; i++)
    {
        printf("%d", b[i]);
    }
}
