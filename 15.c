/*      *
 * * *
 * * * * *
 * * * * * * *
 * * * * * * * * *   */
#include <stdio.h>
void main()
{
    int i, j, k=0;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("  \t");
        }
       while (k != 2 * i - 1)
       {
          printf("*\t");
          k++;
       }
       
        printf("\n");
    }
}