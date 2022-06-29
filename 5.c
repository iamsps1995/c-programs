// definition  and calling
#include <stdio.h>
void sub();
void main()
{
    sub(7,6);
    sub(8,5);
}

void sub(int a, int b)
{
    int x, y, sub = 0;
    printf("enter numbers");
    scanf("%d", &x);
    scanf("%d", &y);
    sub = x- y;
    printf(" subs=%d", sub);
}