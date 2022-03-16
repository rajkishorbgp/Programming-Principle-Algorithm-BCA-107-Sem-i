/*                 printf:- 14.
 Write a c program to find maximum of three numbers using nested if-else.
                                                                       */
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three number:-  ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\na= %d\tb= %d\tc=%d\n",a,b,c);
    if(a>b)
	{
	     if(a>c)
		 {
			printf("a is Greater than b and c");
		 }
		else
		{
			printf("c is Greater than a and b");
		}
	}
	else
	 {
		if(b>a)
		  {
			 if(b>c)
			     printf("b is Greater than a and c");
		     else
		         printf("c is Greater than a and b");
		  }
	 }	  
}																		   