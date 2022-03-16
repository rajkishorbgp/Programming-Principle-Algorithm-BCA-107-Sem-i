/*                program:-  28. 
Write a c program to calculate the value of sine series.
                                                           */
#include<stdio.h>
int factorial(int r);
void main()
{
     int i,n,j,sine=1;
     float x,p,sum=0;
     printf("Enter the number X= ");
     scanf("%f",&x);
     printf("number of terms of series: ");
     scanf("%d",&n);
      for(i=1;i<=n;i++)
       {
         p=1;
         for(j=1;j<=(2*i-1); j++)
         {
             p=p*x;
         }

        sum=sum+(p*sine/factorial(2*i-1));
        sine=-1*sine;
    }
       printf("sine(%f)=%f",x,sum);
}
int factorial(int r)
{

    int i,f=1;
    for(i=1;i<=r;i++)
    {
        f=f*i;
    }return f;
}

