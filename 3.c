// with arguement w/o retrn type
#include <stdio.h>
void sum(int, int);

void main()
{
    int x = 4, y = 9;
    // printf("enter two numbers");
    // scanf("%d %d , &x , &y");
    sum(x, y);
    printf("I LOVE YOU\n");
    sum(7, 8);
}

void sum(int a, int b)
{
    int s = 0;
    // printf("enter numbers");
    // scanf("%d %d", &x , &y);
    s = a + b;
    printf("addition = %d\n", s);
}