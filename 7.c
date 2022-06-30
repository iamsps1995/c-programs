// to print all negative elements in array
#include <stdio.h>
int main()
{
    int i , j , a[]={-1,2,-3,4,-5,6,-7,8,-9} ;
    
    for (size_t i = 0 ; i <9 ; i++)
    {
      if (a[i]<0)
      {
        printf("%d", a[i]);
      }
        
      
    }
    

}