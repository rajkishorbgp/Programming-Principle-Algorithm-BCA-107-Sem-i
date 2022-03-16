    //         program:- 37 
//      Write a c program to find GCD of two numbers.
#include<stdio.h>
void main()
{
	int i,a,b;
	printf("Enter the first number:-  ");
	scanf("%d",&a);
	printf("Enter the secund number:-  ");
    scanf("%d",&b);
	for (i=a<b?a:b; i>=1; i--)
	{
		if (a%i==0 && b%i==0)
		{
		    break;
	    }  
	}
	printf("GCD = %d",i);
	

}