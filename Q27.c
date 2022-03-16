/*           Program:- 27. 
  Write a c program to add first seven terms of the following series:
          1/1! + 2/2! + 3/3! + ......
                                                     */
#include<stdio.h>
void main()
{
float n,i,j,f,b=0;
printf("Enter the term you want to add: ");
scanf("%f",&n);
for(i=1;i<=n;i++)
 {
   f=1;
   for(j=1;j<=i;j++)
   {
     f=f*j;
   }
   b=b+i/f;
 }
printf("sum of terms=%f",b);
}
