/*           program:- 32.
 Write a c program to print Fibonacci sequence. In a Fibonacci sequence the sum
of two successive terms gives the third term. Following are the first few terms of
the Fibonacci sequence:
0 1 1 2 3 5 8 13 21 34 55 89.....*/
#include<stdio.h>
void main()
{
int i,a=-1,c,b=1;
for(i=1; i<=20; i++)
{
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
}
