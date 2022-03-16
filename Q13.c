/*            program:-13
 Write a c program to find maximum of two numbers.
                                                                */
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the two number(a&b):-  ");
	scanf("%d%d",&a,&b);
	printf("\na= %d\tb= %d\n",a,b);
	if (a>b)
	{
		printf("a is Greater than b");		
	}
	else
	printf("b is Greater than a");
}															   
