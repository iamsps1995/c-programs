//with arguements and return type
#include<stdio.h>
 int sum (int, int );

 void main()
 {
     int x , y , z;
     printf("enter two numbers");
     scanf("%d %d", &x , &y);
     z=sum(x,y);
     printf("sum=%d", z);

 }
 int sum(int a , int b)
 {
     int sum ;
     sum=a+b;
     return sum ;

 }