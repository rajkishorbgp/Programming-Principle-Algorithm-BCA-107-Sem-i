//      program:-31
//           Write a c program to print all factors of a number
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the any number:- ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       if(n%i==0)
        printf("%d ",i);
    }
}