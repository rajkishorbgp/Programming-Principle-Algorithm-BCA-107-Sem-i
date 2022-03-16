/*                              Program:- 29
             Write a c program to calculate the value of cosine series
                                                                             */ 
#include<stdio.h>
void main()
{
   float sum=0,t=1,x;int n;
   printf("\n\nHow many terms of execute cosine series(value of n):- ");
   scanf("%d",&n);
   printf("Enter the value of x:- ");
   scanf("%f",&x);
   printf("Cos(%.f)= ",x);
   for (int i= 0; i<n; i++)
   {
	if (i==0)
	  t=1;
	else
	  t=(t*(-1)*x*x)/((2*i)*(2*i-1));
	printf("(%.5f)+",t);
	sum=sum+t;
   }
 printf(".........\n\ncalculate the value of cosine series = %.9f\n\n",sum);
}